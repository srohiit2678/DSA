#include<stdio.h>
int min(int a,int b){
if(a<b)return a;
return b;
}
void main(){
    int n = 5;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int k = (2*n-1)-1-i;
            int l = (2*n-1)-1-j;
            printf("%d ",n-(min(min(i,j),min(k,l))));
        }
        printf("\n");
    }
}
