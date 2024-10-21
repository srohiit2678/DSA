#include<stdio.h>
#include<stdbool.h>
bool isAnagram(char x[],char y[],int n1,int n2){
if(n1!=n2)return false;
int frc[26]={0};
int i=0;
while(i<n1){
    frc[x[i]-97]++;
    frc[y[i]-97]--;
    i++;
}
for(i=0;i<26;i++){
    if(frc[i]!=0)return false;
}
return true;
}
void main(){

 char x[]={'r','a','m','a'};
 char y[]={'a','a','r','m'};
 int n1 = sizeof(x)/sizeof(char);
 int n2 = sizeof(y)/sizeof(char);

 if(isAnagram(x,y,n1,n2)){
    printf("Strings are Anagram");
 }   
 else {
        printf("Strings are not Anagram");
 }
}