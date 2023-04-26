#include <stdio.h>
int main() {
   int i, blank, star, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &star);
   for (i = 1; i <= star; ++i, k = 0) {
      for (blank = 1; blank <= star - i; ++blank) {
         printf("  ");
      }
      while (k != -2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

