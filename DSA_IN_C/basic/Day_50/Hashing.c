#include<stdio.h>
#include<stdbool.h>

bool search(int se);
#define CAP 7

int x[CAP];

int hashCode(int key){
    return key%CAP;
}
void init(){
    for(int i=0;i<CAP;i++)
    x[i] = -1;
}
void insert(int v){
    x[hashCode(v)] = v;
}
bool search(int se){
    return (x[hashCode(se)] == se);
}
void show(){
    printf("Hash Table \n");
    for(int i=0;i<CAP;i++){
        printf("x[%d] => %d\n",i,x[i]);
    }
    
}
void main(){
init();
insert(5);
insert(10);
insert(4);
insert(2);
show();
if(search(10)){
    printf("Found ");
}
else{
        printf("Not Found ");
}
}