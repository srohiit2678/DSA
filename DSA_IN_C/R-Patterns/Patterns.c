#include<stdio.h>

void show(int a, int b, int n){
    if(b>n)return;
    printf("%d",b);
    if(a==n){
        printf("\n");
        a=0;
        b++;
    }
    a++;
    show(a,b,n);
}

void main(){
show(1,1,5);

}
