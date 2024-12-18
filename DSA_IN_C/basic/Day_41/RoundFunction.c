#include<stdio.h>
int round(float x){
    return (int)(x + 0.5);
}

void main(){
printf("%d \n",round(1.3));
printf("%d \n",round(2.5));
printf("%d \n",round(1.4));
printf("%d \n",round(3.7));
}
