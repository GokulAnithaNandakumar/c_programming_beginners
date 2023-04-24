//
//  maze path.c
//  Recursion
//
//  Created by Gokul Nandakumar

#include <stdio.h>

int maze(int cr, int cc, int er, int ec){  //current row , current coulmnend row end coulumn
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;
    if(er==cr) rightways+=maze(cr, cc+1, er, ec); //only rightways call
    if(cc==ec) downways+=maze(cr+1, cc, er, ec);  //only downward call
    if(cr<er && cc<ec){
        rightways+=maze(cr, cc+1, er, ec);
        downways+=maze(cr+1, cc, er, ec);
    }
    
    int total_ways = rightways + downways;
    return total_ways;
    
}

int main(){
    int n,m;
    printf("Enter the number of rows of maze: ");
    scanf("%d", &n);
    printf("Enter the number of coulumns of maze: ");
    scanf("%d", &m);
    int no_of_ways=maze(1,1,n,m);
    printf("%d", no_of_ways);
}
