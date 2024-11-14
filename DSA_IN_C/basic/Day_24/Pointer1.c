#include<stdio.h>

void main(){
    int x=10;
    int *p = &x;
    printf("%d\n",x);
    printf("%d\n",*p);
    *p = 55;
    printf("%d\n",x);
    printf("%d\n",*p);

}