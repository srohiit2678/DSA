#include<stdio.h>
#include<stdbool.h>
int perfact(int n,int a,int s){
    if(a>=n)return s;
    if(n%a==0){
        s+=a;
    }
    a++;
    perfact(n,a,s);
}
bool isPerfact(int n){
return n==perfact(n,1,0);
}
void main(){
int n=6;
    if(isPerfact(n)){
        printf("no. is Perfact");
    }
    else{
        printf("no. is not Perfact");
    }
}