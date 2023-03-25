//
//  inverted half pyramid.c
//  patterns

#include <stdio.h>

int main(){
    /*
     ***
     **
     *
     */
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   for (int i=n; i>=1; i--) {
       for (int k=1; k<=i; k++) {
           printf("*");
       }
       printf("\n");
   }
    
    /*
     123
     12
     1
     */

   for (int i=n; i>=1; i--) {
       for (int k=1; k<=i; k++) {
           printf("%d", k);
       }
       printf("\n");
   }

}
