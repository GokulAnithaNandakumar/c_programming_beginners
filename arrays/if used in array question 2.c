//
//  if used in array question 2.c
//  Arrays
//
//  Created by Gokul Nandakumar 

#include <stdio.h>
//difference between sum of even indexed numbers and sum of odd odd indexed numbers
int main(){
   int arr[]={1,2,3,4,5,6,7,8,9,10};
   int even=0;int odd=0;
   for (int i=0; i<10; i++) {
       if (i%2==0) even+=arr[i];
       else  odd+=arr[i];
   }
   printf("%d", even-odd);
}
