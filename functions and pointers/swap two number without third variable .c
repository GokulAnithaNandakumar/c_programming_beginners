//
//  swap two number without third variable ***.c
//  functions and pointers
//
//  Created by Gokul Nandakumar

#include <stdio.h>
void swap(int a, int b){
   int sum =a+b;
   a=sum-a;
   b=sum-b;
   printf("The value of first number is: %d\n",a);
   printf("The value of second number is: %d\n",b);
   return ;
}
int main(){
   int x,y;
   printf("Enter a number: ");
   scanf("%d", &x);
   printf("Enter a number: ");
   scanf("%d", &y);
   swap(x,y);

}
  

