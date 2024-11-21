#include<stdio.h>
void show(int p[]){
    printf("%d\n",p);  // base address of x array
    printf("%d\n",&p); // address of p 
    printf("%d\n",sizeof(p)); // 4 byte
   }
void show1(int q[],int *y){
    printf("%d\n",q);  //base address of x array
    printf("%d\n",&q); // address of q
    printf("%d\n",y);  //base address of x array
    printf("%d\n",sizeof(q)); //4 byte
    printf("%d\n",sizeof(y)); //4 byte
   }

void main(){
    int x[]={10,20,30,40,50}; 
    int *p = x;
    printf("%d\n",sizeof(p)); // 4 byte
    printf("%d\n",sizeof(x)); // 20 byte
    show(x);
    show1(x,x);
  }