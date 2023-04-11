//
//  HCF of two numbers.c
//  functions and pointers
//
//  Created by Gokul Nandakumar on 26/02/23.
//

#include <stdio.h>
//int hcf(int a, int b){
//    int min=0;
//    if(a>b) min=a;
//    else min=b;
//    int HCF=0;
//    for (int i=1; i<=min; i++) {   //In the for loop we can also use min function instead of finding a min
//        if(a%i==0 && b%i==0){
//            HCF = i;
//        }
//    }
//    return HCF;
//}
//int main(){
//    int c=hcf(24, 60);
//    printf("%d", c);
//}


////Using Recursion
//int hcf(int a, int b){
//    if(a!=0) return hcf(b,a%b);
//    else return b;
//}
//int main(){
//    int c=hcf(12, 8);
//    printf("%d", c);
//}
