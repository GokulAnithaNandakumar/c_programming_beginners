#include <stdio.h>

int main() {
    printf("Enter the year: ");
    int a;
    scanf("%d", &a);
    if(a%4!=0){
        printf("Not leap year.");
    }
    else{
        if (a%100!=0){
            printf("Leap year.");}
        else{
            if (a%400!=0){
                printf("Not a leap year.");   } 
            else{
                printf("Leap year."); }
        }
    }
}