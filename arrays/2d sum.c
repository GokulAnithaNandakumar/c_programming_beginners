//
//  2d sum.c
//  Arrays
//
//  Created by Gokul Nandakumar

#include <stdio.h>
int main(){
   int ar1[2][3] = {1,2,3,4,5,6}; int ar2[2][3] = {1,2,3,4,5,6}; int ar3[2][3];
   for (int i=0; i<2; i++) {
       for (int j=0; j<3; j++) {
           int n=ar1[i][j]+ar2[i][j];
           ar3[i][j]=n;
       }
   }
   for (int i=0; i<2; i++) {
       for (int j=0; j<3; j++) {
           printf("%d\t", ar3[i][j]);}
   }
   
}
