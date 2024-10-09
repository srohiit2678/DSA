#include<stdio.h>
int i=3;
void show(){
if(i>=11)return;
i+=2;
show();
printf("%d\n",i);
} 

void main(){
show();

}