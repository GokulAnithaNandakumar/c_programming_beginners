//
//  memory allocation in array.c
//  Arrays
//
//  Created by Gokul Nandakumar

// int a = 4;    4 bytes
// 1mb=1000kb
// 1gb=1000mb
// ibyte=8bits
// int arr[5] = {91,81,71,61,51}
//             | 0| 1| 2| 3| 4|

#include "stdio.h"
int main(){
   int arr[5]={1,1,2,1,1};
   printf("%p\n", &arr[0]);
   printf("%p\n", &arr[1]);
   printf("%p\n", &arr[2]);
   printf("%p\n", &arr[3]);
   printf("%p\n", &arr[4]);
   printf("%p\n", arr);
}


//0x16fdff1e0   here see the differnence between the last digits 4 each this
//0x16fdff1e4   represents the 4 bytes
//0x16fdff1e8   and
//0x16fdff1ec   here we have c this is hexadecimal system 1 2 3 4 5 6 7 8 9 a b c d
//0x16fdff1f0   e f
//0x16fdff1e0
