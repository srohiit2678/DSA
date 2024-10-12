#include<stdio.h>
int s=0;

void show(int n){
    if(n<=0)return;
    s=s+n%10;
    show(n/10); 
}
void main(){
    show(2581);
    printf("%d ",s);
}
