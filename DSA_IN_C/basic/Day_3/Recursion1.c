// largest of two whitout using loop & control flow
#include<stdio.h>
void main(){
    int x =10;
    int y =20;
    int z =40;
    x>y && x>z && printf("x is largest");
    y>x && y>z && printf("y is largest");
    z>x && z>y && printf("z is largest");
}