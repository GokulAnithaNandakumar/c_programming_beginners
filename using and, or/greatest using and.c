#include <stdio.h>

// int main() {
//     int a, b, c;
//     int s=0;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//     printf("Enter the third number: ");
//     scanf("%d", &c);
//     if (a>s){
//         s=a;
//     }
//     if (b>s){
//         s=b;
//     }
//     if (c>s){
//         s=c;
//     }
//     printf("%d", s);
//     return 0;
// }

int main() {
    int a, b, c;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    if (a>b && a>c){
        printf("%d is greatest", a);
    }
    
    if (a<b && b>c){
        printf("%d is greatest", b);
    }
    if (c>b && a<c){
        printf("%d is greatest", c);
    }
    
    
    return 0;
}