//
//  pascal triangle ultimate method.c
//  functions and pointers

#include <stdio.h>
int fact(int n){
   int a=1;
   for (int i=2; i<=n; i++) {
       a=a*i;

   }return a;
}

int combnation(int a, int b){
   int comb=fact(a)/(fact(b)*fact(a-b));
   return comb;
}
int main(){
   int n;
   printf("Enter the number of lines: ");
   scanf("%d", &n);
   for (int i=0; i<n; i++) {
       int first = 1;
       for (int j=0; j<=i; j++) {
           printf("%d ", first);
           first = first * (i-j)/(j+1); //iC(j+1)

       }printf("\n");
   }
}

int main(){
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   int nst = 1;
   for (int i=0; i<n; i++) {
       int first = 1;
       for (int k=1; k<=n-i; k++) {
           printf(" ");
       }
       for (int j=0; j<nst; j++) {

           if(first==0) first = first * (i-j)/(j+1); //iC(j+1);
           else printf("%d ",first); first = first * (i-j)/(j+1); //iC(j+1);
       }
       nst = nst+2;
       printf("\n");
   }
}
