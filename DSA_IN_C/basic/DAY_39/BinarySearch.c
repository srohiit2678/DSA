#include<stdio.h>
int binarySearch(int x[],int n,int searchElement){
int si = 0;
int mid;
while(si<=n){
   mid = (si+n)/2;
   if(x[mid]==searchElement)return mid;
   else if(x[mid]>searchElement)n = mid-1;
   else si = mid+1;
} 

return -1;
}

void main(){
    int n = 9;
    int x[] = {2,5,8,10,12,15,18,50,80,90};
    printf("%d \n",binarySearch(x,n,1));
    printf("%d \n",binarySearch(x,n,2));
    printf("%d \n",binarySearch(x,n,5));
    printf("%d \n",binarySearch(x,n,8));
    printf("%d \n",binarySearch(x,n,10));
    printf("%d \n",binarySearch(x,n,12));
    printf("%d \n",binarySearch(x,n,15));
    printf("%d \n",binarySearch(x,n,18));
    printf("%d \n",binarySearch(x,n,50));
    printf("%d \n",binarySearch(x,n,80));
    printf("%d \n",binarySearch(x,n,90));
    printf("%d \n",binarySearch(x,n,100));

}