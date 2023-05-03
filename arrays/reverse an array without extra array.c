//
//  reverse an array without extra array.c
//  Arrays
//
//  Created by Gokul Nandakumar

#include <stdio.h>
void reverse(int a[]){
   for (int i=0,j=6; i<j; i++,j--) {
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
   }return;
}
int main(){
   int a[]={1,2,3,4,5,6,7};
   reverse(a);
   for (int i=0; i<7; i++) {
       printf("%d ", a[i]);
   }
}
