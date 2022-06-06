#include <stdio.h>
 
int main() {
   int n,i=0,j;
   printf("Nhap so hang cua tam giac deu: ");
   scanf("%d",&n);
   printf("Ve tam giac:\n");
   a0:
      if (i<n){
       i++;
       goto a1;
      }
        return 0;

   a1:
      for(j = 1; j <= n-i; j++)
         printf(" ");

      for(j = 1; j <= i; j++)
         printf("* ");

      printf("\n");
      goto a0;
   return 0;
}