#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* pre;
		node* next;
	public:
	node(int data)	{
		this->data=data;
		this->pre=NULL;
		this->next=NULL;	
	}
};
void print(node* &head){//for display
	node* temp=head;
	while(temp != NULL){
		cout<<temp->data<<" ->  ";
		temp=temp->next;
		
	}
	cout<<endl;
}
void insert_head(int data,node* &head){
	node* temp=new node(data);
	temp->next=head;
	head->pre=temp;
	head=temp;
}
void insert_last(int data,node* tail){
	node* temp=new node(data);
	tail->next=temp;
	temp->pre=tail;
	tail=temp;
}
int getlen(node* &head){//for countinhg lenghth
		node* temp=head;
		int len;
	while(temp != NULL){
	
		temp=temp->next;
		len++;
	}
	return len;
}
int main(){
node* temp=new node(56);
node* head=temp;
node* tail=temp;
print(head);
cout<<getlen<<endl;
insert_head(78,head);
insert_head(65,head);
insert_head(98,head);
insert_head(71,head);
print(head);
insert_last(23,tail);
print(head);
}

