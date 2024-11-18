#include<stdio.h>

void main(){
    int x[]={10,20,30,40,50};
    int *p = x; //  &x  == x == &x[0] 
    for(int i=0;i<5;i++){
    printf("%d\n",*p); // x[i] == *(p+i) == i[x] == *(i+x) == *(x+i) ==*(&x[0]+i)
    p++; //next address => x+i == &x[0]+i == &x[i] == (p+i)
    }
}