#include<stdio.h>
#include<stdlib.h>
void show(){
    int x=5;
    printf("ram\n");
    printf("%d %d %d %d\n",x==1,x=x<10,x>3,!x);
    exit(0);
}
void main(){
    printf("sita\n");
    show();
    printf("gita\n");
}