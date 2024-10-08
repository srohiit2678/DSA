#include<stdio.h>
int c=0;
void show(int n){
if(n<=2)return;
c++;
show(n-2);
show(n-2);
} 

void main(){
show(9);
printf("%d\n",c);

}