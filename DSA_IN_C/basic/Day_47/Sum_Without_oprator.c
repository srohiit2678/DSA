#include<stdio.h>
void main(){
    int x = 50;
    int y = 3;
    int z = printf("%*c%*c",x,' ',y,' ');
    printf("%d ",z);
}