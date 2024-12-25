#include<stdio.h>
int bSearch(int x[],int left,int right,int se){
    if(left>right)return -1;
    int mid = (left+right)/2;
    if(x[mid]==se)return mid;
    else if(x[mid]<se)bSearch(x,mid+1,right,se);
    else bSearch(x,left,mid-1,se);    
}

void main(){
   int x[] ={1,2,3,4,5,6,7,8,9,10};
   printf("%d",bSearch(x,0,10,7)); 
}