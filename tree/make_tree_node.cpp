#include<bits/stdc++.h>
using namespace std;
    treenode<int>* takeinput{
    int rootval;
    cin>>rootval;
    

}
template<typename T>
class treenode{
    public:
    T data;
    vector<treenode<T>*>child;
    treenode(T data){
        this->data=data;
    }
};
void print(treenode<int>* root){
    if(root == NULL) return;
    cout<<root->data<<"-> ";
    for(int i=0;i<root->child.size();i++){
        cout<<root->child[i]->data<<" , ";
    }
    cout<<endl;
    for(int i=0;i<root->child.size();i++){
        print(root->child[i]);
    }
}
int main(){
treenode<int>* root=new treenode<int>(1);
treenode<int>* n1=new treenode<int>(2);
treenode<int>* n2=new treenode<int>(3);
root->child.push_back(n1);
root->child.push_back(n2);
print(root);
}