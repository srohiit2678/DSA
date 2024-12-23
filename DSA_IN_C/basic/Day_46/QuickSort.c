#include<stdio.h>

int show(int x[],int si,int n);
void dispaly(int x[],int n);

void qSort(int x[],int si,int n);
void main(){
    int n = 10;
    int x[] = {35,33,42,10,14,19,27,44,26,31};

    qSort(x,0,n);
    dispaly(x,n);
}
void qSort(int x[],int si,int n){
int p = show(x,si,n);
qSort(x,si,p-1);
qsort(x,p+1,n);
}

int show(int x[],int si,int n){
int i,p,pi,t; n--;
pi = x[n];
for(i=0,p=0;i<n;i++){
    if(x[i]<pi){
        t = x[i];
        x[i] = x[p];
        x[p] = t;
        p++;
    }
}
    x[n] = x[p];
    x[p] = pi;
    return p;
}


void dispaly(int x[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
    printf("\n\n");
}