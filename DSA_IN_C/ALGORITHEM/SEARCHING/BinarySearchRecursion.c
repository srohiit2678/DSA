#include<stdio.h>

int binarySearchRecursion(int x[],int l,int r,int searchElement){
if(l>r)return -1;
int mid = (l+r)/2;
if(x[mid]==searchElement)return mid;
else if(x[mid]>searchElement)binarySearchRecursion(x,l,mid-1,searchElement);
else binarySearchRecursion(x,mid+1,r,searchElement);
}



void main(){
    int n=9;
    int x[] = {2,5,8,10,12,15,18,50,80,90};
    printf("%d ",binarySearchRecursion(x,0,n,90));

}