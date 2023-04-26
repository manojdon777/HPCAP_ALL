#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100
struct student{
	int phy;
	int chem;
	int bio;
};
int total_marks(int phy, int chem, int bio){
	return phy + chem + bio;
}
int main() {
	srand ( time(NULL) );
	struct student S[N];
	int i;
	int pass_count = 0;
	for(i=0; i<N; i++){
		S[i].phy  = rand()%N;
		S[i].chem = rand()%N;
		S[i].bio  = rand()%N;
	}
	/*for(i=0; i<N; i++)
		printf("%d %d %d\n", S[i].phy, S[i].chem, S[i].bio);*/
	for(i=0; i<N; i++)
		if(total_marks(S[i].phy, S[i].chem, S[i].bio) > 125)
			pass_count++;
	printf("Number of Passed students = %d\n", pass_count);	
	printf("Number of Failed students = %d\n", N - pass_count);	
	return 0;
}
