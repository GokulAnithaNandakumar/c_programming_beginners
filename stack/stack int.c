//
//  stack int.c
//  stack question
//
//  Created by Gokul Nandakumar

#include <stdio.h>
#include <stdbool.h>

# define SIZE 5

int top=-1;
int stack[SIZE];


void push(int x){
    if(top==SIZE-1) printf("\nStackoverflow!");
    else {
        top++;
        stack[top]=x;
        printf("\nSucess");
    }
}

void pop(void){
    if(top==-1) printf("\nStackunderflow!");
    else{
        printf("\nThe element poped is: %d", stack[top]);
        top--;
    }
}

void display(void){
    if(top==-1) printf("\nThere are no elements The stack is EMPTY!");
    else{
        printf("\nThe elements in the stack are:");
        for (int i=top; i>=0; i--) {
            printf("\n%d", stack[i]);
        }
    }
}

void peek(void){
    if(top<=-1) printf("Stack empty");
    else printf("%d", stack[top]);
}

int main(void){
    bool run=true;
    int choice;int a;
    while (run) {
        printf("\nEnter the function to be done:");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n5. Top");
        printf("\nEnter the operation: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("\nEnter the element you want to add: ");
                scanf("%d", &a);
                push(a);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("You Exited\nThanks");
                run=false;
                break;
                break;
            case 5:
                peek();
                break;
            default:
                printf("\nInvalid input!!!");
        }
    }
}
