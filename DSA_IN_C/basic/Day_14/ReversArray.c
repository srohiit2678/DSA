#include<stdio.h>
void main(){
 int x[] ={10,20,30,40,50,60,70,80,90};  
 int i = 0;
 int j = 9-1;
 while(i<j){
	 int t = x[i];
	  x[i] = x[j];
	  x[j] = t;
	 i++;    j--;
 }
 for (int i=0;i<9;i++){
 printf("%d ",x[i]);
}
}