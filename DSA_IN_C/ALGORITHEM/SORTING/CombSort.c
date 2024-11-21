#include<stdio.h>
#include<stdio.h>
void display(int x[],int n);
void combSort(int x[],int n,int g);
void advaceCombSort(int x[],int n,int g);
void combSort(int x[],int n,int g){
    if(g<1)return;
    if(g==9||g==10)g=11;
    int i;
    for(i=0;i<n-g;i++){
        if(x[i]>x[i+g]){
            int t = x[i];
            x[i] = x[i+g];
            x[i+g] = t;
        }
    }
    combSort(x,n,g/1.3);
}
int c = 1;
void advaceCombSort(int x[],int n,int g){
if(g<1)g=c--;
if(g<1)return;
for(int i=0;i<n-g;i++){
    if(x[i]>x[i+g]){
        int t = x[i];
        x[i] = x[i+g];
        x[i+g] = t;
    }
}
advaceCombSort(x,n,g/1.3);
}


int main(){
	int n = 13;
    
    // Not work properly for this No. combSort(x,n,n/1.3); 
	int x1[] ={5,0,6,2,7,1,8,4,9,3,12,11,5};

		display(x1,n);
	combSort(x1,n,n/1.3);
		display(x1,n);
    printf("\n\n");
// work properly for this No. advanceCombSort(x,n,n/1.3);
    int x2[] ={5,0,6,2,7,1,8,4,9,3,12,11,5};
    
        display(x2,n);
    advaceCombSort(x2,n,n/1.3);
		display(x2,n);

    return 0;    
}


void display(int x[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
		printf("\n");
}