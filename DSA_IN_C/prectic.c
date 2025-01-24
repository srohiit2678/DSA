#include<stdio.h>
int perfact(int n,int s,int i){
	if((i*2-1)>=n)return s;
	if(n%i==0){
	s = s + i;		
	}
	return perfact(n,s,++i);
}

void main()
{	int n = 8; 
	if(perfact(n,0,1)==n){
		printf("Perfact ");
	}
	else{
		printf("Not Perfact ");
	}
}


















/*

(A+B*C^D-E^F+G*H-I)
i/p        stack         	o/p
(			(
A			(			    A
+			(+				A
B			(+				AB
*			(+*				AB
C			(+*				ABC
^			(+*^			ABC
D			(+*^			ABCD
-			(-				ABCD^*+
E			(-				ABCD^*+E
^			(-^				ABCD^*+E
F			(-^				ABCD^*+EF
+			(+				ABCD^*+EF^-
G			(+				ABCD^*+EF^-G
*			(+*				ABCD^*+EF^-G
H			(+*				ABCD^*+EF^-GH
-			(-				ABCD^*+EF^-GH*+
I			(-				ABCD^*+EF^-GH*+I
)			(				ABCD^*+EF^-GH*+I-















    showAllV();

    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");

    insertAtBigin(10);
    insertAtBigin(20);
    insertAtBigin(30);
    insertAtBigin(40);
    insertAtBigin(50);
    insertAtBigin(60);

    showAllV();

    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");

    insertAtEnd(70);
    insertAtEnd(80);
    insertAtEnd(90);
    insertAtEnd(100);
    insertAtEnd(110);
    insertAtEnd(120);     

    showAllV();

    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");

    insertAtPosition(1,65);
    insertAtPosition(3,55);
    insertAtPosition(5,45);
    insertAtPosition(7,35);
    insertAtPosition(9,25);
    insertAtPosition(11,15);

    showAllV();

    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");

    deleteAtBigin();
    deleteAtBigin();
    deleteAtBigin();

    showAllV();

    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");

    deleteAtEnd();
    deleteAtEnd();
    deleteAtEnd();

    showAllV();

    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");

    deleteAtPosition(2);
    deleteAtPosition(3);
    deleteAtPosition(4);
    deleteAtPosition(5);

    showAllV();
    
    printf("-------------\n");
    printf("Number of Nodes = %d\n",countNode());
    printf("-------------\n");


// */
// #include<stdio.h>
// #include<stdlib.h>

// void insertAtBigin(int);
// void showAllV();


// struct Node{
// int data;
// struct Node *next;
// };

// struct Node *start = NULL;

// void * revList(struct Node*);

// void main(){
//     showAllV();
//     insertAtBigin(10);
//     insertAtBigin(20);
//     insertAtBigin(30);
//     insertAtBigin(40);
//     insertAtBigin(50);

//     showAllV();

//     start = (struct Node*)revList(start);
//     showAllV();

// }


// void insertAtBigin(int x){
// struct Node *temp = malloc(sizeof(struct Node));
// if (temp == NULL)
// {
//     printf(" No space...\n");
//     return;
// }
// temp -> data = x;
// temp ->next = start;
// start = temp;
// }

// void showAllV(){
//     if(start==NULL)printf("Empty List...\n");

//     struct Node *temp = start;
//     while(temp!= NULL){
//         printf("%d\n",temp->data);
//         temp = temp->next;
//     } 
// }



// void *revList(struct Node *temp){
//     if(temp == NULL || temp->next==NULL){
//         return temp;
//     }   

// struct Node* newStart = revList(temp->next);

// struct Node* temp2 = temp->next;
// temp2->next = temp;
// temp ->next = NULL;

// return newStart;
// }
/*

#include<stdio.h>
#include<stdbool.h>
void display(int x[],int n);
void csort(int x[] , int n){
int i,t,g = n/1.3;
while (g>0)
{ 
	for(i=0;i<n-g;i++){
		if(x[i]>x[i+g]){
			t = x[i];
			x[i] = x[i+g];
			x[i+g] = t;
	display(x,n);
		}
	}
	g = g/1.3;
}

}

void display(int x[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
		printf("\n");

}



void main(){
	int n = 13;
	int x[] ={5,0,6,2,7,1,8,4,9,3,12,11,5};
		display(x,n);
	csort(x,n);
		display(x,n);
}





// void merageSort(int x[],int n);
// void divide(int x[],int n);
// void merage(int a[],int b[],int x[],int l,int r);
// void display(int x[],int n);
// void cSort(int x[],int n);
// void cSort(int x[],int n){
// 	int y[n];
// 	int i;
// 	int max =x[0];
// 	int min =x[0];
// 	for(i=1;i<n;i++)if(min>x[i])min=x[i];
// 	for(i=0;i<n;i++)x[i]-=min;
// 	for(i=1;i<n;i++)if(max<x[i])max=x[i];	
// 	max++;
// 	int a[max];
// 	for(i=0;i<max;i++)a[i]=0;
// 	for(i=0;i<n;i++)a[x[i]]++;
// 	for(i=1;i<max;i++)a[i]+=a[i-1];
// 	for(i=0;i<n;i++)y[a[x[i]]-=1]=x[i];
// 	for(i=0;i<n;i++)x[i]=y[i]+min;
// }


// void display(int x[],int n){
// for(int i=0;i<n;i++)
// printf("%d ",x[i]);
// printf("\n\n");
// }

// void main(){
// 	int x[] = {56,29,35,42,15,41,75,21};
// 	int n=8;
// 	cSort(x,n);
// 	display(x,n);
// }


// void csort(int x[] , int n)
// {
//     int y[n];
//     int max = x[0];
//     int min = x[0];
//     int i;
//     for(i=1;i<n;i++){if(min>x[i])min=x[i];}
//     for(i=0;i<n;i++)x[i] = x[i]- min;
//     for(i=1;i<n;i++){if(max<x[i])max=x[i];}
//     max++;
//     int a[max];
// 	for(i=0;i<max;i++)a[i]=0;
//     for(i = 0;i<n;i++)a[x[i]]++;
//     for(i=1;i<max;i++)a[i]+=a[i-1];
//     for(i=n-1;i>=0;i--)y[a[x[i]]-=1]=x[i];
//     for(i=0;i<n;i++)x[i] = y[i]+min;
// }



// void display(int x[],int n)
// {
// 	for(int i=0;i<n;i++){
// 		printf("%d ",x[i]);
// 	}
//  printf("\n");
// }

// void main(){
// 	int x[] = {56,29,35,42,15,41,75,21};
// 	int n=8;
// 	csort(x,n);
// 	display(x,n);
// }

/*
*/
/*
void sum(int a[],int b[],int x[],int l,int r);
void divide(int x[], int n){
	if(n<=1)return;
	int l = n/2;
	int r = n-l;
	int a[l];
	int b[r];
	int i;
	for(i = 0;i<l;i++){
		a[i] = x[i];
	}
	for(i = 0;i<r;i++){
		b[i] = x[l+i];
	}
	divide(a,l);
	divide(b,r);
	sum(a,b,x,l,r);

}
void sum(int a[],int b[],int x[],int l,int r){
	int i,j,k;
	for( i=0,j=0,k=0;i<l&&j<r;){
		if(a[i]<b[j]){
			x[k++] = a[i++];
		}
		else {
			x[k++] = b[j++];
		}
	}
	while(i<l){x[k++] = a[i++];}
	while(j<r){x[k++] = b[j++];}
}

void display(int x[],int n)
{
	for(int i=0;i<n;i++){
		printf("%d ",x[i]);
	}
 printf("\n");
}

void main(){
	int x[] = {11,10,9,8,7,6,5,4,3,2,1};
	int n=11;
	divide(x,n);
	display(x,n);
}


*/

/*



void display(int x[],int n);
void show(int x[],int n,int i){
    int left = i*2+1;
    int right = i*2+2;
    int min = i;
    if(right<n){
        if(x[left]<x[right])min = left;
        else min = right;
	}
	else if(left<n){
		min = left;
	}
    if(x[min]<x[i]){
        int temp = x[min];
        x[min] = x[i];
        x[i] = temp;
		display(x,11);
        show(x,n,min);
    }
}
void root(int x[],int n){
for(int i=n/2-1;i>=0;i--){
    show(x,n,i);
}
}
void delete(int x[],int n){
    for(int i=n-1;i>=1;i--){
    int temp = x[0];
    x[0] = x[i];
    x[i] = temp;        
	 display(x,n);     
	 show(x,i,0);
    }
}
void display(int x[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
	printf("\n\n");
}
void main(){
    int n=11;
    int x[]={11,10,9,8,7,6,5,4,3,2,1};
    root(x,n);
    delete(x,n);
    display(x,n);
}
*/
/*
#include<stdio.h>
void display(int x[],int n);
void sort(int x[],int n){
	int i,j,max;
	for(i=n-1;i>=0;i--){
		max = x[i];
		for(j=i;j<n-1;j++){
			if(max>x[j+1]){
				x[j] = x[j+1];
			    display(x,n);	
		
			}
			else break;
		}
		x[j] = max;
	}
}

void display(int x[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
	printf("\n\n");
}
void main(){
    int n=8;
    int x[]={66,73,17,13,87,34,83,90};

    display(x,n);
	sort(x,n);
    display(x,n);
}
*/

/*
#include<stdio.h>
void display(int x[],int n);
void show(int x[],int n,int div){
	int i;
	int a[10]={0};
    int y[n];	
	for(i=0;i<n;i++)a[x[i]/div%10]++;
	for(i=1;i<10;i++)a[i]+=a[i-1];
	for(i=n-1;i>=0;i--)y[a[x[i]/div%10]-=1]=x[i];
    for(i=0;i<n;i++)x[i]=y[i];
		display(x,n);
}
void rsort(int x[],int n){
	int i;
    int max = x[0];
    int min = x[0];
    for(i=1;i<n;i++)if(min>x[i])min=x[i];
    for(i=0;i<n;i++)x[i]=x[i]-min;
	for(i=1;i<n;i++)if(max<x[i])max=x[i];
	for(i=1;i<=max;i=i*10)show(x,n,i);
	display(x,n);
	for(i=0;i<n;i++)x[i] = x[i]+ min;
}
void display(int x[],int n){
	for(int i=0;i<n;i++){
		printf("%d ", x[i]);
}
printf("\n\n");
}
void main(){
	int n=8;
	int x[]={66,73,17,13,87,-34,-83,90};
	display(x,n);
	rsort(x,n);	
	display(x,n);
	    
}
*/
//17 ,12 ,13 ,34 ,66 ,67 ,87 ,90 ,683 ,834


/*
void main(){
	int s=1;
int c[25];int r1=0;
int c2[13];int r2=0;
int c3[6];int r3=0;
int c4[3];int r4=0;

for(int j=1;j<=100;j++){
	printf("%d   ",j);
}
printf("\n\n\n\n\n  ");

for(int i=1;i<=100;i+=2){
	printf("%d   ",i);
}
	printf("\n\n\n\n\n  ");	
	for(int i=1;i<=100;i+=2){
	
		if(s==1){
		printf("%d   ",i);		
		c[r1++]=i;
		s=0;
		}
		else{
			s=1;
		}
	
		}
		s=1;
	 printf("\n\n\n\n\n  ");	
		for(int i=0;i<=24;i++){
			if(s==1){
			printf("%d   ",c[i]);
			c2[r2++]=c[i];
			s=0;
		}
		else{
			s=1;
		}
		}
	s=0;
		printf("\n\n\n\n\n  ");	
		for(int i=0;i<13;i++){
		if(s==1){
			printf("%d   ",c2[i]);
			c3[r3++]=c2[i];
			s=0;
		}
		else{
			s=1;
		}
		}
		s=1;
printf("\n\n\n\n\n  ");	
for(int i=0;i<6;i++){
			if(s==1){
			printf("%d   ",c3[i]);
			c4[r4++]=c3[i];
			s=0;
			}
			else{
				s=1;
			}
		}
		s=1;
printf("\n\n\n\n\n  ");	
		
		for(int i=0;i<3;i++){
		if(s==1){
			printf("%d   ",c4[i]);
			c4[r4++]=c3[i];
			s=0;
			}
			else{
				s=1;
			}
		}
}

*/

