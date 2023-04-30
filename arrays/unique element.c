//
//  unique element.c
//  Arrays
//
//  Created by Gokul Nandakumar

#include <stdio.h>
#include <stdbool.h>
int main(){
   int a[]={1,3,6,1,1,2,3};
   for (int i=0; i<7; i++) {
       bool flag=false;
       for (int j=i+1; j<7; j++) {
           if(a[i]==a[j]){flag=true;}
       }
       if(flag==false) {printf("%d", a[i]);break;}
   }
   
   
}
