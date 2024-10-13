#include<stdio.h>
int s_Largest(int x[],int size){
    int largest  = x[0];
    int slargest = x[0];
    for(int i=1;i<size;i++){
        if(largest<x[i]){
            slargest = largest;
            largest  = x[i];
        }
        else if( slargest < x[i] || largest == slargest){
            slargest = x[i];
        }
    }
 return slargest;
}
void main(){
    int x[] = {10,40,45,50,49,50,49,47};
    int n = sizeof(x)/sizeof(int);
    printf("%d",s_Largest(x,n));
}