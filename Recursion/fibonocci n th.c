//
//  fibonocci n th.c
//  Recursion
//
//  Created by Gokul Nandakumar

#include <stdio.h>
int fib(int n){
   if(n<=2) return 1;
   return fib(n-1)+fib(n-2);
}
int main(){
   int a = fib(5);
   printf("%d", a);
}
