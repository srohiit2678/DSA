#include<stdio.h>
#include<stdbool.h>
bool isValid(int x[4][4], int r,int c){
	int i,j;
	for(j=c;j>=0;j--){
		if(x[r][j])return false;
	}
	for(i=r;i>=0;i--){
		if(x[i][c])return false;
	}
	for(i=r,j=c;i>=0 && j>=0; i--,j--){
	if(x[i][j])return false;
	}
	for(i=r,j=c;i>=0 && j<4; i--,j++){
		if(x[i][j])return false;
	}
	return true;
}
void show(int x[4][4],int c){
	if(c>=4) return;
	for(int i=0;i<4;i++){
		if(isValid(x,i,c)){
			x[i][c]=1;
     		show(x,c+1);
        }
    }
}
void main(){
	int x[4][4]= {
				  {0,0,0,0},
				  {0,0,0,0},
				  {0,0,0,0},
				  {0,0,0,0}		
				 };
		
		show(x,0);
	
    for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	
}