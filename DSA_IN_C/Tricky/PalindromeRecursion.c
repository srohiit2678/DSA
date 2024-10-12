#include<stdio.h>

int palindrome(int n , int sum){
	if(n<=0)return sum;

	sum = sum*10+n%10;

	return palindrome(n/10,sum);
   
	}
	 int mul(int m,int n){
		if(n==0) return 0;
		return m+mul(m,n-1);
		
	}
	void main(){
	
	if(121 == palindrome(121,0)){
        printf("palindrome");
		
    }
	else{
		 printf(" not palindrome");
		
	}
	printf("\n\n%d",mul(5,5));
}
