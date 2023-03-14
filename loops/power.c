//
//  power.c
//  loops

#include <stdio.h>
int main(){
   int a,b;
   printf("Enter the base: ");
   scanf("%d", &a);
   printf("Enter the exponent: ");
   scanf("%d", &b);
   int ans=1;
   for (int i=1; i<=b; i++) {
       ans=ans*a;
   }printf("%d", ans);
}
