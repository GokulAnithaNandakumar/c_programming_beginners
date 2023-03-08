
//  digits of number.c

#include <stdio.h>
int main(){
   int n;
   int x = 0;

   printf("Enter the number: ");
   scanf("%d", &n);
   while(n!=0){
       n=n/10;
       x++;
   }
   printf("%d", x);
}

