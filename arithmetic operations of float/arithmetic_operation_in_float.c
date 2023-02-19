#include<stdio.h>

int main(){
    float x = 5;
    float y = 2;
    printf("%f\n", x/y);
    printf("%.2f\n", x/y);
    float a = 5.123;
    float b = 1.4;
    printf("%f\n", a + b);
    printf("%f\n", a - b);
    printf("%f\n", a * b);
    printf("%f\n", a / b);
    //pritnf("%f\n", a % b);  we cant do this as this is float
    return 0;
}