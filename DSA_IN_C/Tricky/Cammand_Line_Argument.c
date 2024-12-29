#include<stdio.h> 
// gcc Cammand_Line_Argument.c
// a 10 20 30

//void main(int a,char *ch[]){
void main(int a, char **ch){
printf("no. of argument = %d\n",a);  // a, 10, 20, 30 ==> 4 (here)
printf("%s\n",ch[0]); // a // Name of application ==>(Cammand_Line_Argument.exe to run and MingW creat -> a)
printf("%s\n",ch[1]); // 10 // secound argument but first value
printf("%s\n",ch[2]); // 20 // thired
printf("%s\n",ch[3]); // 30 // fourth
}