#include<stdio.h>

void hanoi(int disk,char source,char destination,char temp){
    if(disk==1){
        printf("Move disk %d => %c => %c = \n",disk,source,destination);
    }
    else{
        hanoi(disk-1,source,temp,destination);
        printf("Move disk %d => %c => %c = \n",disk,source,destination);
        hanoi(disk-1,temp,destination,source);
    }
}

void main(){
    hanoi(3,'A','C','B');
    
}