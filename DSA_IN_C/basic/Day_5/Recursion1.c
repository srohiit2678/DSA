#include<stdio.h>
int c=0;
void show(int n){
    c++;
if(n>=11)return;
show(n+1);
} 

void main(){
show(1);
printf("%d",c);
}