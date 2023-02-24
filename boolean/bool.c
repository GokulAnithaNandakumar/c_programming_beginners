#include<stdio.h>
int main(){
    int x=3;
    printf("%d", x==10);  //false=0
    printf("\n%d", x==3); //true=1
    printf("\n%d", x<10); //true=1
    printf("\n%d", x>10); //false=0
    
    return 0;
}