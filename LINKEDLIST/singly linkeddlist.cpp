#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
	//destructor for delee node	
	~node(){
		int value=this->data;
		//memory frree
		if(this->next != NULL){
			delete next;
			this->next=NULL;
		}
	}
};
void insertion_head(node* &head,int d){//take reference because no different hed create
	//create new node
	node* node1=new node(d);
	node1->next=head;
	head=node1;
}
void insertion_last(node* &tail,int d){
	node* temp=new node(d);//create node
	tail->next=temp;
	tail=temp;	
}
void insertion_position(node* &head,node* &tail,int pos,int d){
	node* temp=head;
	//if it is first node
	if(pos==1){
		insertion_last(head,d);
		return;
	}
	int ct=1;
	while(ct<pos-1){
		temp=temp->next;
		ct++;
	}
//	if it is last node
	if(temp->next==NULL){
		insertion_last(tail,d);
		return;
	}
	node* nodetoinsert=new node(d);//create node
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
}
void deletenode(int pos,node* &head){
	node* temp=head;
	if(pos==1){//delete first node
		head=head->next;
		temp->next=NULL;
		delete temp;
	}else{
		node* curr=head;
		node* pre=NULL;
		int cnt=1;
		while(cnt< pos){
			pre=curr;
			curr=curr->next;
			cnt++;
		}
		pre->next=curr->next;
		curr->next=NULL;
		delete curr;
		
	}
	
}
void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-> ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	node* node1=new node(19);
	node* head=node1;
	node* tail=node1;
	insertion_head(node1,29);
	insertion_last(tail,45);
	insertion_last(tail,86);
	print(head);
	insertion_position(head,tail,2,56);
	print(head);
	cout<<"head ->"<<head->data<<" ";
	cout<<"tail ->"<<tail->data<<endl;
	deletenode(2,head);
	print(head);
}

