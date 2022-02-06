#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
	public:
		node(int d){
			this->data=d;
			this->next=NULL;
		}
		~node(){
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};
void insertnode(node* &tail,int element,int d){
	//empty list
	
if(tail == NULL)	{
	node* temp=new node(d);
	tail= temp;
	temp->next=temp;
	
	}
	//only present one node
	else{
		node* curr=tail;
		while(curr->data != element){
			curr=curr->next;
		}
		node* newnode=new node(d);
		newnode->next=curr->next;
		curr->next=newnode;
	}
}
void print(node* &tail){
	node*  temp=tail;
	do{
		cout<<tail->data<<" -> ";
		tail=tail->next;
	}
	while(tail != temp);
	cout<<endl;
}
	

int main(){
	node* tail=NULL;
	insertnode(tail,6,45);
	insertnode(tail,45,15);
	insertnode(tail,15,5);
	insertnode(tail,45,75);
	print(tail);
}

