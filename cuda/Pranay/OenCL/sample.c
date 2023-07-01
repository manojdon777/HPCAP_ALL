#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#ifdef _APPLE_
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif

#define ARRSIZE 1000
/*
                N  PRIME_NUMBER

                1           0
               10           4
              100          25
            1,000         168
           10,000       1,229
          100,000       9,592
        1,000,000      78,498
       10,000,000     664,579
      100,000,000   5,761,455
    1,000,000,000  50,847,534

*/

int main() 
{ 
    int count = 0; 
    cl_platform_id platform_id = NULL; 
    cl_device_id device_id = NULL; 
    cl_context context = NULL; 
    cl_command_queue command_queue = NULL; 
    cl_program program = NULL; 
    cl_kernel kernel = NULL; 
    cl_uint ret_num_devices; 
    cl_uint ret_num_platforms; 
    cl_int ret; 
    cl_char device_name[300];

    FILE *fp;
    const char fileName[] = "./4_kernel.cl";
    size_t source_size;
    char *source_str;
    cl_int i;

     // Open Kernel file
    fp = fopen(fileName, "r");
    if (!fp)
    {
        fprintf(stderr, "Failed to load kernel.\n");
        exit(1);
    }
    source_str = (char *)malloc(0x100000);
    source_size = fread(source_str, 1, 0x100000, fp);
    fclose(fp);
    int *count_array = (int*)malloc(sizeof(int)*ARRSIZE); 
    for (i = 0; i < ARRSIZE; i++)  
    { 
        count_array[i] = 0; 
    } 
     // Get platform and device information 
    ret = clGetPlatformIDs(1, &platform_id, &ret_num_platforms); 
    ret = clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_GPU, 1, &device_id, &ret_num_devices); 
     // Create an OpenCL context 
    context = clCreateContext(NULL, 1, &device_id, NULL, NULL, &ret); 
     // Create a command queue 
    command_queue = clCreateCommandQueue(context, device_id, 0, &ret); 
     // Create a program from the kernel source code 
    program = clCreateProgramWithSource(context, 1, (const char **)&source_str, &source_size, &ret); 
     // Build the program 
    ret = clBuildProgram(program, 1, &device_id, NULL, NULL, NULL); 
     // Create the kernel 
    kernel = clCreateKernel(program, "prime", &ret); 
     // Create a buffer to hold the count array on the device 
    cl_mem count_buffer = clCreateBuffer(context, CL_MEM_READ_WRITE, sizeof(int)*ARRSIZE, NULL, &ret); 
     // Set the kernel arguments 
    ret = clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&count_buffer); 
     // Create launch configuration
    size_t global_work_size = ARRSIZE;
     // Execute kernel
    ret = clEnqueueNDRangeKernel(command_queue, kernel, 1, NULL, &global_work_size, NULL, 0, NULL, NULL);
     // Read the count array from the device 
    ret = clEnqueueReadBuffer(command_queue, count_buffer, CL_TRUE, 0, sizeof(int)*ARRSIZE, count_array, 0, NULL, NULL); 
     // Calculate the total count of prime numbers 
    for (i = 0; i < ARRSIZE; i++)  
    { 
        count += count_array[i]; 
    } 
     printf("\n Number of prime numbers = %d\n", count); 
     // Clean up 
    ret = clFlush(command_queue); 
    ret = clFinish(command_queue); 
    ret = clReleaseKernel(kernel); 
    ret = clReleaseProgram(program); 
    ret = clReleaseMemObject(count_buffer); 
    ret = clReleaseCommandQueue(command_queue); 
    ret = clReleaseContext(context); 
    free(count_array);
    free(source_str);
    return 0; 
}
