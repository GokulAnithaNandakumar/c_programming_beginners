//
//  factorial.c
//  loops

#include <stdio.h>
int main(){
   int n;
   int x=1;
   printf("Enter the number: ");
   scanf("%d", &n);
   if (n==0){printf("0");}

   else{
       for (int i=n; i>=1; i--) {
           x=x*i;
       }
       
       printf("%d", x);
   }
}
