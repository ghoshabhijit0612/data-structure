#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct node{
	int data;
	node* next;
};
class linked_list{
	private:
		node *head,*tail;
		int size=0;
	public:
		linked_list(){
			head=NULL;
			tail=NULL;
		}
		void print(){
			node* temp=head;
			while(temp != NULL){
				cout<< temp->data;
				if(temp->next ==NULL){
					cout<<endl;
				}
				else{
					cout<<"-->";
				}
				temp = temp -> next;
			}
		
			
		}
		void push_back(int val){
			node *temp=new node;
			temp->data =val; 
			temp->next = NULL;
			if(head==NULL){
				head=tail=temp;
			}
			else{
				tail->next = temp;
				tail=temp;
			}
			 
		}
		void push_front(int val){
			node* temp=new node;
			temp -> data =val;
			temp ->next = NULL;
			if(head==NULL){
				head= tail=temp;
			}
			else{
				temp -> next =head;
				head=temp;
			}
				size++;
			 
				
		}
		void insert(int index,int val){
			if(index>size){
				cout<<"not possible"<<endl;
			}
			else if(index==0){
				push_front(val);
			}
			else{
				
			}
			
		} 
};
int main()
{
	linked_list a;
	a.push_back(1);
	a.push_back(4);
	a.push_back(5);
	a.push_front(6);
	a.print();
   
    return 0;
}

