//
//  string palindrome.c
//  strings
//
//  Created by Gokul Nandakumar on 13/05/23.
//

#include <stdio.h>
#include <string.h>
int main(void){
    char str[30];
    scanf(" %s", str);
    int count = 0;
    int i = 0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    int flag = 1;
    int mid = count/2;
    for(int i=0, j=count-1; i<=mid && j>=mid; i++, j--){
        if(str[i]==str[j]){
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }
        
    }
    if(flag == 1) printf("Yes");
    else printf("No");
}

