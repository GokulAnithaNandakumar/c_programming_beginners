//
//  fibonocci.c
//  loops


#include <stdio.h>
//using while loop
int main(){
   int n;
   int a=0;
   int b=1;
   int fib;
   int cout = 0;
   printf("Enter the term: ");
   scanf("%d", &n);
   if(n<=0){printf("Enter a positive number");}
   else if (n==1){printf("%d", a);}
   else if (n==2){printf("%d", b);}
   else{
       while (cout < (n-2)) {

           fib=a+b;

           a=b;
           b=fib;

           cout++;
       }printf("%d",fib);
   }
}


//using for loop

int main(){
   int n;
   int a=0;
   int b=1;
   int fib;

   printf("Enter the term: ");
   scanf("%d", &n);
   for (int i=1; i<=n-2; i++) {
       fib=a+b;
       a=b;
       b=fib;

   }printf("%d", fib);
}

