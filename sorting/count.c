//
//  count.c
//  sorting
//
//  Created by Gokul Nandakumar on 24/05/23.
//

//#include <stdio.h>
//
//void cs( a[], char n, char k){
//    char count[k+1]; char b[n];
//    for (int i = 0; i <= k; ++i)
//      {
//        count[i] = 0; // Initialize count array with all zeros
//      }
//    for (int i=0; i<n; i++) {
//        ++count[a[i]];
//    }
//    for(int i=1; i<=k; i++){
//        count[i] = count[i]+count[i-1];
//    }
//    for(int i=n-1; i>=0; i--){
//        b[--count[a[i]]]=a[i];
//    }
//    for(int i=0; i<n; i++){
//        a[i]=b[i];
//    }
//    for (int i=0; i<n; i++) {
//        printf("%c ", a[i]);
//    }
//}
//
//
//int main(void){
//    char arr[]={'A','B','C','A','B','D','E','F','E','B'};
//    cs(arr, 11, 76);
//}


//#include<stdio.h>
//#include<stdlib.h>
//#define RANGE 256
//void countsort(char array[],int n,int k){
//    char count[RANGE+1]={0};
//    char b[n];
//    for(int i=0;i<n;i++){
//        count[array[i]]++;
//    }
//    for(int i=1;i<=RANGE;i++){
//        count[i]=count[i]+count[i-1];
//    }
//    for(int i=n-1;i>=0;i--){
//        b[count[array[i]]-1]=array[i];
//        count[array[i]]--;
//    }
//    for(int i=0;i<n;i++){
//        array[i]=b[i];
//    }
//}
//void printArray(char array[], int size) {
//    for (int i = 0; i < size; i++)
//        printf("%c ", array[i]);
//    printf("\n");
//}
//int main(void){
//    char array[] = {'A','B','C','A','B','D','E','F','E','B'};
//    int a=sizeof(array)/sizeof(array[0]);
//    int b=a;
//    printf("ORIGINAL ARRAY:");
//    printArray(array,a);
//    countsort(array,a,b);
//    printf("\nSORTED ARRAY:");
//    printArray(array,a);
//}
