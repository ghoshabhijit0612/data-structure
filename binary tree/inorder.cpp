#include<bits/stdc++.h>
using namespace std;
template<typename T>
class node{
   public: 
    T data;
    node* left;
    node* right;
   public:
   node(T data){
       this->data=data;
       left= NULL;
       right=NULL;
   } 
   ~node(){
       delete left;
       delete right;
   }
};
void print(node<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";  
    if(root->left != NULL){
        cout<<" L"<<root->left->data<<" ";
    }
    if(root->right != NULL){
        cout<<"R "<<root->right->data;
    }
    cout<<endl;
     print(root->left);
     print(root->right);
}
node<int>* takeinputlebelwise(){
    cout<<"enter the data"<<endl;
    int rootval;
    cin>>rootval;
    if(rootval == -1){
        return NULL;
}
node<int>* root=new node<int>(rootval);
queue<node<int>*>pendingnodes;
pendingnodes.push(root);

while(pendingnodes.size() != 0){
    node<int>* front =pendingnodes.front();
    pendingnodes.pop();
    cout<<"enter theh left child "<<front->data<<endl;
    int leftchilddata;
    cin>>leftchilddata;

    if(leftchilddata != -1){
        node<int>* child = new node<int>(leftchilddata);
        front->left=child;
        pendingnodes.push(child);
    } 

    cout<<"enter theh right child "<<front->data<<endl;
    int rightchilddata;
    cin>>rightchilddata;

    if(rightchilddata != -1){
        node<int>* child = new node<int>(rightchilddata);
        front->right=child;
        pendingnodes.push(child);
    } 
  
}
return root;
}
node<int>* takeinput(){
    cout<<"enter the data"<<endl;
    int rootval;
    cin>>rootval;
    if(rootval == -1){
        return NULL;
}
node<int>* root=new node<int>(rootval);
node<int>* leftchild=takeinput();
node<int>*  rightchild=takeinput();
root->left=leftchild;
root->right=rightchild;
return root;
}
// int countnode(node<int>* root){
//     if(root == NULL){
//         return 0;
//     }
//     return 1 + countnode(root->left) + countnode(root ->right);
// }
void inorder(node<int>* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node<int>* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    // node<int>* root=new node<int>(2);  
    //  node<int>* node1=new node<int>(3);
    // node<int>* node2=new node<int>(4);
    // // node<int>* node3=new node<int>(5);
    // root->left=node1;
    // root->right=node2;
    // print(root);
    node<int>* root=takeinputlebelwise();
    inorder(root);
    postorder(root);
    delete root;
}

