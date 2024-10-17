#include<stdio.h>
/*
last root (having at least one chiled) => (array_size)/2-1

left chiled of of root => (root_index)*2+1

right chiled of of root => (root_index)*2+2
*/
// work until root does not have one one child
// work for two childs of root
void heap(int x[],int n ,int i)
{
    int l = i*2+1;
    int r = i*2+2;
    int max = i;
    int t;
    if(l<n && x[l]>x[r]){
        max =l;
    }
    if(r<n && x[l]<x[r]){
        max =r;
    }

    if(x[i]<x[max]){
        t = x[i];
        x[i] =  x[max];
        x[max]=t;
        heap(x,n,max);
    }
}
void root(int x[],int n){
for(int i=n/2-1;i>=0;i--){
    heap(x,n,i);
}
}

void main(){
int x[] = {1,2,3,4,5,6,7};
int n = 7;
root(x,n);
for(int i=0;i<n;i++){
    printf("%d ",x[i]);
}
}
