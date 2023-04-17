//
//  permutation combination nCr.c
//  functions and pointers

#include "stdio.h"
int fact(int n){
    int a=1;
    for (int i=2; i<=n; i++) {
        a=a*i;
        
    }return a;
}
int combnation(int a, int b){
    int comb=fact(a)/(fact(b)*fact(a-b));
    return comb;
}

int permutation(int a, int b){
    int per=fac
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);
    int nfac=fact(n);
    int rfac=fact(r);
    int nrfac=fact(n-r);
    int ncr=nfac/(rfac*nrfac);
    int ncr1=fact(n)/(fact(r)*fact(n-r));
    int ncr2=combnation(n, r);
    printf("%d\n" "%d\n" "%d", ncr, ncr1, ncr2);
    return 0;
}
