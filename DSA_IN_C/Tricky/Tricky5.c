#include<stdio.h>
// largest in two or three whithout loop and 
// control statement
void show1(int n1,int n2){
    n1>n2 && printf("largest is %d\n",n1);
    n2>n1 && printf("largest is %d\n",n2);
}
void show2(int n1,int n2, int n3){
    n1>n2 && n1>n3 && printf("largest is %d\n",n1);
    n2>n1 && n2>n3 && printf("largest is %d\n",n2);
    n3>n1 && n3>n2 && printf("largest is %d\n",n3);
}

void main(){
show1(10,20);
show2(10,20,30);
}