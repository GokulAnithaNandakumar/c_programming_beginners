//
//  rhombus.c
//  patterns

#include <stdio.h>
int main(){
   int n;
   printf("Enter the side value: ");
   scanf("%d", &n);
   for (int i=n; i>=1; i--) {
       for (int k=1; k<=i; k++) {
           printf(" ");
       }
       for (int i=1; i<=n; i++) {
           printf("*");
       }
       
       
       printf("\n");
       
   }}
