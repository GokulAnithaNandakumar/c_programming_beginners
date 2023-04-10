//
//  space pyramid number new.c
//  patterns

#include <stdio.h>

int main(){
   int n;
   printf("Enter the side value: ");
   scanf("%d", &n);
   for (int i=1; i<=(n*2)-1; i++) {
       printf("%d", i);

   }
   printf("\n");
   for (int i=n-1; i>=1; i--) {
       
       for (int k=1; k<=i; k++) {
           printf("%d", k);
          
       }
       for (int l=i; l<=n-1; l++) {
           printf(" ");
           
       }
       for (int d=i; d<=n-2; d++) {
           printf(" ");
           
       }

       for (int j=i; j>=1; j--) {
           printf("%d", j);
           
       }


       printf("\n");

   }}
