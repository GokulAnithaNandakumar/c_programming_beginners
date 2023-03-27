//
//  0 and 1 half triangle.c
//  patterns

#include <stdio.h>
int main(){

   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   /*
   1 
   0 1 
   1 0 1 
   0 1 0 1 
    */

   int a=1;
   int b=0;

   for (int i=1; i<=n; i++) {
           for (int k=1; k<=i; k++) {
               if(i==k){
                   printf("%d ", a);}
               else if ((i+k)%2==0){printf("%d ", a);}
               else{printf("%d ", b);}

       }
       printf("\n");
   }
}
