#include<stdio.h>
void show1(){
    int x = 10;
    int *p = &x;
    printf("%d\n",sizeof(p)); // 4 byte
    printf("%d\n",sizeof(x)); // 4 byte
}
void show2(){
    char x = 10;
    char *p = &x;
    printf("%d\n",sizeof(p)); // 4 byte
    printf("%d\n",sizeof(x)); // 1 byte
}
void show3(){
    float x = 10;
    float *p = &x;
    printf("%d\n",sizeof(p)); // 4 byte
    printf("%d\n",sizeof(x)); // 4 byte
}
void show4(){
    double x = 10;
    double *p = &x;
    printf("%d\n",sizeof(p)); // 4 byte
    printf("%d\n",sizeof(x)); // 8 byte
}

void main(){
    int x[]={10,20,30,40,50}; 
    int *p = x;
    printf("%d\n",sizeof(p)); // 4 byte
    printf("%d\n",sizeof(x)); // 20 byte
    show1();
    show2();
    show3();
    show4();
  }