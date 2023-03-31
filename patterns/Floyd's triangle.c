//
//  Floyd's triangle.c
//  patterns

#include <stdio.h>
int main(){

   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   /*
    1
    2 3
    4 5 6
    7 8 9 10
    */

   int a=1;

   for (int i=1; i<=n; i++) {
               for (int k=1; k<=i; k++) {
           printf("%d ", a);
           a++;
       }
       printf("\n");
   }
}
