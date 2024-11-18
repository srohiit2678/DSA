#include<stdio.h>
void show(int p[]){
    printf("%d\n",p);  // base address of x array
    printf("%d\n",&p); // address of p 
   }
void show1(int q[],int *y){
    printf("%d\n",q);  //base address of x array
    printf("%d\n",&q); // address of q
    printf("%d\n",y);  //base address of x array
    printf("%d\n",&y); // address of y

   }

void main(){
    int x[]={10,20,30,40,50}; 
    show(x);
    show1(x,x);
}