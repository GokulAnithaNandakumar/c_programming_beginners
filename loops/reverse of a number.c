//
//  reverse of a number.c
//  loops

#include <stdio.h>
int main(){
   int n;
   int y;

   printf("Enter the number: ");
   scanf("%d", &n);
   while (n!=0){
       y=n%10;
       printf("%d", y);
       n=n/10;
   }

}

int main(){
   int n;
   int r=0;
   
   printf("Enter the number: ");
   scanf("%d", &n);
   while (n>0){
       r=r*10;
       r = r+(n%10);
       
       
       n=n/10;
   
   }
   printf("%d", r);

}
