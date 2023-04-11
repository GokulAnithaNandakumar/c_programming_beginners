//
//  space pyramid number.c
//  patterns
//
//  Created by Gokul Nandakumar on 21/02/23.
//

#include <stdio.h>
//my code
//int main(){
//    int n;
//    printf("Enter the side value: ");
//    scanf("%d", &n);
//    for (int i=1; i<=(n*2)-1; i++) {
//        printf("%d", i);
//
//    }
//    printf("\n");
//    for (int i=n-1; i>=1; i--) {
//        int a=1;
//        for (int k=1; k<=i; k++) {
//            printf("%d", a);
//            a++;
//        }
//        for (int l=i; l<=n-1; l++) {
//            printf(" ");
//            a++;
//        }
//        for (int d=i; d<=n-2; d++) {
//            printf(" ");
//            a++;
//        }
//
//        for (int j=i; j>=1; j--) {
//            printf("%d", a);
//            a++;
//        }
//
//
//        printf("\n");
//
//    }}

//sir code
//int main(){
//    int n;
//    printf("Enter the side value: ");
//    scanf("%d", &n);
//    int nst=n;
//    int nsp=1;
//    for (int i=1; i<=(n*2)+1; i++) {
//        printf("%d", i);
//
//    }
//    printf("\n");
//    for (int i=1; i<=n; i++) {
//        int a=1;
//        for (int k=1; k<=nst; k++) {
//            printf("%d", a);
//            a++;
//        }
//
//        for (int d=1; d<=nsp; d++) {
//            printf(" ");
//            a++;
//        }
//
//        for (int j=1; j<=nst; j++) {
//            printf("%d", a);
//            a++;
//        }
//        nst--;
//        nsp+=2;
//        printf("\n");
//
//    }}
