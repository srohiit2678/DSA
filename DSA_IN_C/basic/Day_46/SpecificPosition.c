#include<stdio.h>

void dispaly(int x[],int n);
int show(int x[],int si,int n);
void qsort(int x[],int si,int n);
void main(){
    int n = 10;
    int x[] = {35,33,42,10,14,19,27,44,26,31};
    qsort(x,0,n-1);
    dispaly(x,n);
}

int show(int x[],int si,int n){ // n = 10
int i,p,pi,t; // index ---> 0 to 9
pi = x[n]; // puting last x[9] at his specific position
for(i=si,p=si;i<n;i++){
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

void qsort(int x[],int si,int n){
    if(n<=si)return;
    int p = show(x,si,n);
    qsort(x,si,p-1);
    qsort(x,p+1,n);

    

}
void dispaly(int x[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
    printf("\n\n");
}