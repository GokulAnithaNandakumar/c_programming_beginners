//
//  find missing number from 1 to 100.c
//  Arrays
//
//  Created by Gokul Nandakumar

#include <stdio.h>
int main(){
   int sum=0;
   int sum100=5050;
   int a[]={
       1,  3, 2,   7,  5,  6,  4,  8,  9, 10, 11, 12,13, 14, 15,  16, 17, 18, 19, 20, 21, 22, 23, 24,25, 26, 27,  28, 29, 30, 31, 32, 33, 34, 35, 36,
       37, 38, 39,  40, 41, 42, 43, 44, 45, 46, 47, 48,49, 55, 51,  52, 53, 54, 50, 56, 57, 58, 59, 60,61, 62, 63,  64, 65, 66, 67, 68, 69, 70, 71, 72,
       73, 74, 75,  76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87,  88, 89, 90, 92, 93, 94, 95, 96,97, 98, 99, 100};
   for (int i=0; i<100; i++) {
       sum+=a[i];
   }
   if(sum!=sum100) {int b=sum100-sum;printf("The number absent is %d", b);}
   else printf("All numbers present");
}
