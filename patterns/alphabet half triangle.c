//
//  alphabet half triangle.c
//  patterns

#include <stdio.h>
int main(){
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   for (int i=1; i<=n; i++) {
       
       
       for (int k = 65; k<=64+i; k++) {
           //typecasting
           //        char a = (char)i;
           printf("%c", k);
       }
       printf("\n");}
}
