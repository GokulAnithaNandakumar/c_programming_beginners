//
//  exponent.c
//  Recursion
//
//  Created by Gokul Nandakumar

#include<stdio.h>
int power(int a, int b){
   if(b==0) return 1;
   else {return a* power(a, b-1);}
       
       
   
}
int main(){
   int a = power(5, 3);
   printf("%d", a);
}
