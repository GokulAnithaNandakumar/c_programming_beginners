//
//  alphabet square.c
//  patterns

#include <stdio.h>
int main(){
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   for (int i=1; i<=n; i++) {
       
       
       for (int i = 65; i<=64+n; i++) {
           //typecasting
           //        char a = (char)i;
           printf("%c", i);
       }
       printf("\n");}
}
