//
//  sum of digits.c
//  loops

#include <stdio.h>
int main(){
   int n;
   int x = 0;
   int y;
   
   printf("Enter the number: ");
   scanf("%d", &n);
   while (n!=0){
       y=n%10;
       x=x+y;
       n=n/10;
       
   }
   printf("%d", x)
}

