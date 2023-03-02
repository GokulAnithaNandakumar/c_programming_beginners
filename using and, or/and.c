#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<1000 && n>99) //Use of and &&.
    {
        printf("Yes three digit number");
    }
    else{
        printf("No not three digit number");
    }
    return 0;
}