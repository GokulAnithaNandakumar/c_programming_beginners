#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the cost price: ");
    scanf("%d", &a);
    printf("Enter the selling price: ");
    scanf("%d", &b);
    c=b-a;
    if(b<a){
        printf("Loss: $");
        c=c*(-1);
        printf("%d", c);
    }
    else if(a==b){
        printf("There is no profit or loss.");
    }
    else{
        printf("Profit: $");
        printf("%d", c);
        }
    return 0;
}