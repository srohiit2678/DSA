#include<stdio.h>
#include<stdlib.h>
int s = 0;
int i = 1;
void main(int a,char *ch[]){
while(ch[i]){
  
	s = printf("%*c%*c",s,' ',atoi(ch[i]),' ');
	i = printf("%*c%*c",i,' ',1,' ');
}
printf("%d",s);











// void main(int a,char x[][]){
//int sum = 0;
//while(--a>0){
 //sum += atoi(x[a]);
//}
//printf("%d ",sum);

//if(NULL == '\0')
//{
//printf("%d",sizeof(NULL));	
//}

}