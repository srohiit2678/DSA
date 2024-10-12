#include<stdio.h>
int s=0;

void show(int n){
    if(n<=0)return;
    s=s*10+n%10;
    show(n/10);
}
void main(){
    show(258);
    printf("%d ",s);
}
