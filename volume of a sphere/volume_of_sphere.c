#include<stdio.h>
// int main(){
//     float pi = 3.1415;
//     int r = 5;
//     float volume = 4 * pi * r * r * r / 3; // We cant use **
//     printf("The Volume is : %f", volume);
//     printf("\nThe Volume is : %.3f", volume);
//     return 0;

// }
//scan using input
int main(){
    float pi = 3.14;
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    float volume = 4 * pi * r * r * r / 3;
    printf("The Volume is : %f", volume);
    printf("\nThe Volume is : %.3f", volume);
}