#include <stdio.h>

void bs(int a[], int n){
   int temp, flag;
   for(int i=0; i<n-1; i++){
       flag=1;
       for(int j=0; j<n-1-i; j++){
           if(a[j]>a[j+1]){
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               flag=0;
           }
       }
       if(flag==1){
           break;
       }
   }
}


int main(void){
   int arr[]={1,5,2,5,6,34,45,65,2,76,243,7};
   bs(arr, 12);
   for(int i=0; i<12; i++){
       printf("%d ", arr[i]);
   }
}
