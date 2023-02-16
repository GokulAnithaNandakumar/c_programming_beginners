#include <stdio.h>

int main(){
    int x=5;
    int y;
    y = 10;
    printf("%d\n", x);
    printf("%d\n", y);
    x=9;
    printf("%d\n", x);
    x = x + 20;
    printf("%d\n", x);
    x = x - 10;
    printf("%d", x);
    return 0;
}