//
//  duplicate element.c
//  Arrays
//
//  Created by Gokul Nandakumar

#include <stdio.h>
int main(){
   int a[]={1,2,3,7,5,6,7};
   for (int i=0; i<7; i++) {
       for (int j=i+1; j<7; j++) {
           if(a[i]==a[j]) {printf("%d is a duplicate.", a[i]); break;}
       }
   }
}
