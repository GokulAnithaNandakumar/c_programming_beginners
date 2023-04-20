//
//  1 to n after call.c
//  Recursion
//
//  Created by Gokul Nandakumar

#include <stdio.h>
void increasing(int n){

   if(n==0) return;
   increasing(n-1);
   printf("%d", n);
   return;
}
int main(){
   increasing(5);
}
