#include<stdio.h>
int main(){
    float pi = 3.14;
    int r = 5;
    float area = pi * r * r;
    printf("The area is : %f", area);
    printf("\nThe area is : %.2f", area);
    return 0;
}