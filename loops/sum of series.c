//
//  sum of series.c
//  loops

#include <stdio.h>
//1-2+3-4+5-6.... unto n terms
int main(){
   int n;
   printf("Enter the number of terms: ");
   scanf("%d", &n);
   int x=1;
   for (int i=2; n!=1; i++) {
       if (n%2==0){
           x=x-i;
           n--;
       }
       else{
           x=x+i;
           n--;
       }
   }

   printf("%d", x);
}
