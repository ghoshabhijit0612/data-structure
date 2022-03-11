#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

Node(int data){
    this->data = data;
    this->left = NULL;
    this->right= NULL;
}
};
Node* insertbst(Node* root,int d){
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    //right call
    if(d>root->data){
        root ->right = insertbst(root->right,d);
    }
    else{
        root ->left = insertbst(root->left,d);
    }
    return root;
}

void takeinput(Node* &root){
    int d;
    cin>>d;
    while(d != -1){
        root = insertbst(root,d);
        cin>>d;
    }
}
void print(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    if(root->left != NULL){
        cout<<root->left->data<<endl;
    }
    if(root->right != NULL){
        cout<<root->right->data<<endl;
    }
    print(root->left);
    print(root->right);

}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root = NULL;
    cout<<"enter the data"<<endl;
    takeinput(root);
    cout<<"print tree"<<endl;
    print(root);
    cout<<"inorder tree"<<endl;
    inorder(root);
}