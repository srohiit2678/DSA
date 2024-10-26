#include<stdio.h>
int show(int a,int b,int n){
    if(b>=1){
if(printf("%d ",a) && a==b && printf("\n") && b--){
    if(a=0){}
}
if(show(++a,b,n)){}
}
}
void main(){
    if(show(1,5,5)){}
}