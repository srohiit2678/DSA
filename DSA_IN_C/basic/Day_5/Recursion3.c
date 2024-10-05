#include<stdio.h>
int c=0;
void show(int n){
    c++;
if(n<=0)return;
show(n-1);
show(n-3);
} 

void main(){
show(9);
printf("%d",c);
}