#include<stdio.h>
#include<stdbool.h>

bool show(int x[4][4],int r, int c){
    // check coloums of 1th row for 1
    for(int j=c;j>=0;j--){
        if(x[r][j]==1)return false;
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
    if(show(x,0,3)){
        x[0][3] = 1;
    }
    
    // print x
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

}