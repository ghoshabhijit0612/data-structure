#include<iostream>
using namspace std;
int main(){
	
}
class node{
	public :
		int value;
		node *left;
		node *right;

		node (){
		value=0;
		left=NULL;
		right=NULL;	
	}
		node (int val){
		value=val;
		left=NULL;
		right=NULL;	
	}
};
class bst{
	private :
		node *root;
	public :
		bst(){
			root=NULL; 
		}	
		bst(int rootvalue){
			root=new node(rootvalue);
		}
		node* getroot(){
			return root;
		}
		node* insertbst(node* currentnode,int val){
			
		}
		void insert(int val){
			if(getroot()==NULL){
				root=new node(val);
				return;
			}
			root=insertbst(root,val);
			

		}
		node* del(node* currentnode,int val){
			
		}
		node *search(node* currentnode,int val){
			if(currentnode==NULL)
				return NULL;
			if(currentnode->value==val)
				return currentnode;
			else if(currentnode->value < val)
			{
				return search(currentnode->right,int val);
					}		
			else if (currentnode->value > val){
				return search(currentnode->left,int val);
			}		
		}
		void print(node* currentnode){
			
		}
};
