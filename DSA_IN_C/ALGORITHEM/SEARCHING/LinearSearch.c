#include<stdio.h>
#include<stdlib.h>
int linearSearch(int x[],int n,int searchElement);
int linearSearch(int x[],int n,int searchElement){
    for(int i=0;i<n;i++){
        if(x[i]==searchElement)
        return i;
    }
    return -1;
}
void main(){
    int n=10;
    int x[] = {2,5,8,10,12,15,18,50,80,90};
    printf("%d ",linearSearch(x,n,80));

}