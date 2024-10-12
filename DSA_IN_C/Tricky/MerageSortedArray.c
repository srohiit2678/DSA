#include<stdio.h>
void merage(int x[],int y[],int z[], int n1,int n2){
int i,j,k;
for(i=0,j=0,k=0;i<n1 && j<n2;){
if(x[i]<y[j]){
z[k++]=x[i++];
}
else{
z[k++]=y[j++];
}
}

while(i<n1){

z[k++]=x[i++];
}

while(j<n2){

z[k++]=y[j++];
}
}
void main(){
int x[]={1,3,5,7,9};
int y[]={2,4,6,8};
int z[9];
merage(x,y,z,5,4);
for(int i=0;i<9;i++){
printf("%d ",z[i]);
}
}