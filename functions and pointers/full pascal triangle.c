//
//  full pascal triangle.c
//  functions and pointers
//
//  Created by Gokul Nandakumar on 23/02/23.
//
//
//#include <stdio.h>
//
//int fact(int n){
//    int a=1;
//    for (int i=2; i<=n; i++) {
//        a=a*i;
//
//    }return a;
//}
//
//int combnation(int a, int b){
//    int comb=fact(a)/(fact(b)*fact(a-b));
//    return comb;
//}
//
//int main(){
//    int n;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    int nst = 1;
//    for (int i=0; i<n; i++) {
//        for (int k=1; k<=n-i; k++) {
//            printf(" ");
//        }
//        for (int j=0; j<nst; j++) {
//            int c=combnation(i, j);
//            if(c==0) continue;
//            else printf("%d ",c);
//        }
//        nst = nst+2;
//        printf("\n");
//    }
//}
