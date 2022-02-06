#include<iostream>
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
int main(){
    // node<int>* root=new node<int>(2);  
    //  node<int>* node1=new node<int>(3);
    // node<int>* node2=new node<int>(4);
    // // node<int>* node3=new node<int>(5);
    // root->left=node1;
    // root->right=node2;
    // print(root);
    node<int>* root=takeinput();
    print(root);


}

