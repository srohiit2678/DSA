#include<stdio.h>

void show(int n){

if(n<=0)return;

printf("%d \n",n%10);
show(n/10);


}

void main(){

    show(12);

}