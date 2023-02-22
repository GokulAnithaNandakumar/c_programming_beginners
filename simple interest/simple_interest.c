#include<stdio.h>
// int main(){
//     float p, r, t, si;
//     p = 100;
//     r = 10;
//     t = 2;
//     si = (p * r * t) / 100;
//     printf("The Interst is : %f", si);
//     printf("\nThe Interst is : %.2f", si);
//     return 0;
// }

//Using input

int main(){
    float p, r, t, si;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time period: ");
    scanf("%f", &t);
    si = (p*r*t)/100;
    printf("The Interst is : %f", si);
    printf("\nThe Interst is : %.2f", si);
    return 0;
}