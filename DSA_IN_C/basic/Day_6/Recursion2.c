#include<stdio.h>
// Tail Recursion
void show(int n){
if(n==11)return;
printf("%d\n",n);
show(n+1);
} 

void main(){
show(1);

}