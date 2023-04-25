//
//  power function logarithmic.c
//  Recursion
//
//  Created by Gokul Nandakumar

#include <stdio.h>

int powerlog(int a, int b){
   if(b==0) return 1;
   int x = powerlog(a, b/2);
   if(b%2==0) return x*x;
   else return x*x*a;
}
int main(){
   printf("%d", powerlog(2, 3));
}
