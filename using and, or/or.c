#include<stdio.h>
int main(){
    int n;
     
    // printf("Enter the first side: ");
    // scanf("%d", &a);
    // printf("Enter the second side: ");
    // scanf("%d", &b);
    printf("Enter number: ");
    scanf("%d", &n);
    if (n%5==0 || n%3==0 && n%15!=0){
        printf("number divisible by 5 or 3 but not 15");
    }
    else{
        printf("Not matchig required conditions");
    }
    
    
    return 0;
}