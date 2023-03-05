//
//  prime or not.c
//  loops

#include<stdio.h>
int main(){
   int n;
   int a = 1;
   printf("Enter the number: ");
   scanf("%d", &n);
   if (n==1) printf("1 is neither prime nor composite");
   else{
       for (int i=2; i<(n/2); i++) {
           if(n%i==0){
               a = 0;
               break;

           }
           else{
               a = 1;
           }
       }
       if(a==0){
           printf("Not Prime");
       }
       else{
           printf("Prime");
       }

   }
}
