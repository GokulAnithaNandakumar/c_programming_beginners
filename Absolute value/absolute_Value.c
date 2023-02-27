#include <stdio.h>

int main() {
    printf("Enter the number: ");
    int a;
    scanf("%d", &a);
    if(a<0){
        a=a*(-1);
        printf("%d", a);
    }
    else{
        printf("%d", a);
        }
    return 0;
}