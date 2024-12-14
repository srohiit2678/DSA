#include<stdio.h>
#include<stdlib.h>
int binarySearch(int x[],int end,int searchElement);
int binarySearch(int x[],int end,int searchElement){
    int start = 0;
    int mid;    
    while(start<=end){
//        mid = (start+end)/2;
        mid = start + (end - start)/2;
      if(x[mid]==searchElement)
        return mid;
      else if(x[mid]>searchElement)
        end = mid -1;
      else    
        start = mid+1;  
      printf("%d \n",mid);
    }

    return -1;
}
void main(){
    int n=9;
    int x[] = {2,5,8,10,12,15,18,50,80,90};
    printf("%d ",binarySearch(x,n,100));

}