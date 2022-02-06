#include<stdio.h>
void toh(int n,char beg,char aux,char end);
int main()
{
	printf("enter  disk = ");
	int n;
	scanf("%d",&n);
	toh(n,'A','B','C');
	
}
void toh(int n,char beg,char aux,char end){
	if(n==1){
			printf("move disk %d %c to %c\n",n,beg,end);
		}
		else{
		
		toh(n-1,beg,end,aux);
		printf("move disk %d %c to %c\n",n,beg,end);
		toh(n-1,aux,beg,end);
	}
}
