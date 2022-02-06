#include<stdio.h>
#include<string.h>
#define MAX 5
void push();
void pop();
void display();
int stack_array(MAX);
int top=-1;
int item;
int main()
{
	int choice;
	while(1){
		printf("\n push element to stack \n");
		printf("pop element from stack \n");
		printf("display all element of stack \n");
		printf("quit \n");
		printf("enetr your choice ");
		scanf("%d",&choice);
		switch(choice){
				case 1:
				push();
				case 2:
				pop();
				case 3:
				display();
				break;
				case 4:
				exit(1);
				default:
				printf("wromg choice");
		}
	}
	
}
void push(){
	int item;
	if(top==MAX-1){
		printf("\n overflow ");
	}
	else{
		printf("\n enter the elemet to be inserted ");
		scanf("%d",&item);
		top=top+1;
		stack_array[top]=item;	
	}
}
void pop(){
	if(top==1){
		printf("\n underflow \n");
		
	}
	else{
		item=stack_array[top];
		printf("\n the deleted element is %d",stack_array[top]);
		top=top-1;
	}
}
void display(){
	int i;
	printf("\n the cutrrent elelment in the stack are \n");
	if(top==-1){
		printf("\n the stack is empty\n");
	}
	for(i=top;i>=0;--i){
		printf("%d\n",stack_array[i]);
	}
}















