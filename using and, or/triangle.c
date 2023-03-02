#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the first side: ");
    scanf("%d", &a);
    printf("Enter the second side: ");
    scanf("%d", &b);
    printf("Enter the third side: ");
    scanf("%d", &c);
    if ((a+b)>c && (a+c)>c && (c+b)>a){
        printf("Valid Triangle");
    }
    
    else{
        printf("Invalid Triangle");
    }
    return 0;
}