#include<stdio.h>

void main(){
    int x=10;
    int *p = &x;
    printf("%d\n",&x);
    printf("%d\n",p);
    *p++; // add. of x (&x) + sizeof(int)
    printf("%d\n",&x);
    printf("%d\n",p);

}