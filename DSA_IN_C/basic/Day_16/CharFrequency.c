#include<stdio.h>
void charFrequency(char x[],int n){
        
    int frc[26]={0};
    int i=0;
    while(i<n){
        frc[x[i]-97]++;
        i++;
    }
    for(i=0;i<26;i++){
        if(frc[i]!=0){
            printf("%c ---> %d\n",i+97,frc[i]);
        }
    }
}
void main(){

    char x[] = {'m','y','n','a','m','e','i','s','r','a','m'};

    int n =sizeof(x)/sizeof(char);

    charFrequency(x,n);
    
}