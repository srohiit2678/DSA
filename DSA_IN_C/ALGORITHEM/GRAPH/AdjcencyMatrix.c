#include<stdio.h>
#include<stdbool.h>
#define SIZE 9
#define MAX 2147483647

//AdjcencyMatrix.c
int x[SIZE][SIZE]={0};

 void insert();
 void show();
 void showPath();
 void algorithm(); 
 int minIndex();

 void main(){
	
	insert(0,1,4);
	insert(0,6,7);
	insert(1,2,9);
	insert(1,6,11);
	insert(1,7,20);
	insert(2,3,6);
	insert(2,4,2);
	insert(3,4,10);
	insert(3,5,5);
	insert(4,7,1);
	insert(4,5,15);
	insert(4,8,5);
	insert(5,8,12);
	insert(6,7,1);
	insert(7,8,3);
	
	show(x);
	
	algorithm(x,0);
	

 }



void algorithm(int x[SIZE][SIZE],int source){
bool markV[SIZE];
int path[SIZE];
int i,j;
for(i=0;i<SIZE;i++){
	path[i] = MAX;
	markV[i] = false;
}
path[source] = 0;

 for(i=0;i<SIZE;i++){
	 int m = minIndex(path,markV);
	printf("%d  %s\n",m,(markV[m])?"true":"false");

	 markV[m] = true;

 	for(j=0;j<SIZE;j++){
		if(x[m][j]!=0 && markV[j]== false && path[j] > path[m]+x[m][j])
			path[j] = path[m]+x[m][j];
 	}

 }
//	printf("\n\n\n");

	// printf("%s\n",(markV[0])?"true":"false");
	// printf("%s\n",(markV[1])?"true":"false");
	// printf("%s\n",(markV[2])?"true":"false");
	// printf("%s\n",(markV[3])?"true":"false");
	// printf("%s\n",(markV[4])?"true":"false");
	// printf("%s\n",(markV[5])?"true":"false");
	// printf("%s\n",(markV[6])?"true":"false");
	// printf("%s\n",(markV[7])?"true":"false");
	// printf("%s\n",(markV[8])?"true":"false");
//	printf("\n\n\n");
showPath(path);
}

 int minIndex(int path[SIZE],int markV[SIZE]){
	 int minV = MAX;
	 int minI = -1;
	 for(int i=0;i<SIZE;i++){
		 if(markV[i]==false && minV > path[i]){
			 minV = path[i];
			 minI = i;
		 }
	 }
	 return minI;
 }


// show shortest path from all source
 void showPath(int path[SIZE]){
	for(int i=0;i<SIZE;i++){

		printf("%d ----> %d\n\n",i,path[i]);
	

	} 
 }




// give weight and path to vertices
 void insert(int v1,int v2,int w){
	x[v1][v2] = w;
	x[v2][v1] = w;
 }
 
 // show matrix
 void show(int x[SIZE][SIZE]){
	 for(int i=0;i<SIZE;i++){
	 for(int j=0;j<SIZE;j++){
		 printf(" %4d  ",x[i][j]);
	 }
	 printf("\n");
	 }
 }