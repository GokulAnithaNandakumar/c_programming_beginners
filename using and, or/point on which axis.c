#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the coordinates: ");
    scanf("%d %d", &x,&y);
    
    if(y==0 && x==0){
        printf("Orgin");
    }
    else if(x==0 && y!=0){
        printf("X axis");
    }
    else if(y==0 && x!=0){
        printf("Y axis");
    }
    else{
        printf("It doesnt lie on axis");
    }
    return 0;
}