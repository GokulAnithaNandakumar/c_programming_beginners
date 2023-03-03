// Even odd
#include <stdio.h>

int main() {
    int a;
    printf("Enter a positive number: ");
    // scanf("%d", &a);
    //Ternary
    a=5;
    //expression1 ? expression2 : expression3
    a%2==0 ? printf("Even") : printf("Odd");
    // if(a%2==0){
    //     printf("Even");
    // }
    // else{
    //     printf("Odd");
    // }
    // return 0;
}