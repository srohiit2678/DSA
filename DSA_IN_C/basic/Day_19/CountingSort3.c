#include<stdio.h>
void show (int x[],int n){
int a[10]={0};
int i;
for(i=0;i<n;i++){
 a[x[i]]++;
}
for(i=0;i<n;i++){
 printf("%d\n",a[i]);
}
}
void main(){
    int x[10]={2,7,8,1,3,4,5,9};
    int n = 8;
    show(x ,n);
    for(int i=0;i<n;i++){
      //  printf("%d ",x[i]);
    }
}