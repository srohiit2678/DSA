#include<stdio.h>
void show(int n){
if(n>=11) return;
if(n%2==0){
    printf("%d\n",n);
}
show(n+1);
}
void main(){
    show(1);
}