//
//  first n fibonocci numbers.c
//  loops

#include <stdio.h>
int main(){
   int n;
   int a=0;
   int b=1;
   int fib;

   printf("Enter the term: ");
   scanf("%d", &n);
   printf("The 1 fibonocci number is 1\n");
   printf("The 2 fibonocci number is 1\n");
   for (int i=1; i<=n-2; i++) {
       fib=a+b;
       a=b;
       b=fib;
       printf("The %d fibonocci number is %d\n", i+2, fib);

   }
}

