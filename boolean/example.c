#include<stdio.h>
int main(){
    int x=3,y,z;
    y=x=10;
    z=x<10;
    printf("\nx=%dy=%dz=%d",x,y,z);
    
    return 0;
}
// x=10y=10z=0    x is int y is int z is bool