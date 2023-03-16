//
//  print ascii.c
//  loops

#include <stdio.h>
int main(){
   int x=65;
   printf("%d\t", x);
   char a = (char)x;
   printf("%c\n", a);
   for (int i=65; i<=90; i++) {
       //typecasting
       char ch = (char)i;
       printf("%c --> ", ch);
       printf("%d\n",i);
   }
}
