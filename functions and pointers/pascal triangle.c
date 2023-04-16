//
//  pascal triangle.c
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
       for (int j=0; j<=i; j++) {
           int iCj=combnation(i, j);
           printf("%d ", iCj);
       }printf("\n");
   }
}
