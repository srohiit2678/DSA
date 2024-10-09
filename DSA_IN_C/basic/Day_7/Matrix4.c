#include<stdio.h>
#include<stdbool.h>

bool show(int x[4][4],int r, int c){
    int i,j;
    // check coloums for 1
    for(j=c;j>=0;j--){
        if(x[r][j]==1)return false;
    }
    // check row for 1
    for(i=r;i>=0;i--){
        if(x[i][c]==1)return false;
    }
    // check diagonals for 1 
    for(i=r,j=c;i>=0 && j>=0;i--,j--){
        if(x[i][j]==1)return false;
    }
return true;
}

void main(){
    int x[4][4] = { {1,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0}
                  };
    // cheack for having 1 or not
    if(show(x,3,3)){
        x[3][3] = 1;
    }
    
    // print x
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

}