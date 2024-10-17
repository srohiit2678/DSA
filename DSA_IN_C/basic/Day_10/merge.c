#include<stdio.h>
// merging two sorted arrays by single loop

void merge(int x[],int y[],int z[],int l,int m){
int i,j,k;
for(i=0,j=0,k=0;i<l && j<m;){
if(x[i]<y[j]){
    z[k++] = x[i++];
}
if(x[i]>y[j]){
    z[k++] = y[j++];
}
}

while(i<l)z[k++] = x[i++];

while(j<m)z[k++] = y[j++];

}
void main(){
    int x[] = {2,4,6,8,10};
    int l   =5;
    int y[] = {1,3,5,7,9,11};
    int m   =6;
    int z[l+m];
    merge(x,y,z,l,m);

    for(int i=0;i<l+m;i++){
        printf("%d ",z[i]);
    }
}