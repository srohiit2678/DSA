#include<stdio.h>

void main(){
    int x[]={10,20,30,40,50};
    int *p = &x;
    for(int i=0;i<5;i++){
    printf("%d\n",*p);
    p++;
    }
}