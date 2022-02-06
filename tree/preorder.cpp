#include<bits/stdc++.h>
using namespace std;

template<typename T>
class treenode{
    public:
    T data;
    vector<treenode<T>*>child;
    treenode(T data){
        this->data=data;
    }
    ~treenode(treenode<int>* root){
        for(int i=0;i<root->child.size();i++){
            delete child[i];
        }
    }
};
  treenode<int>* takeinput(){
    int rootval;
    cout<<"enter the data"<<endl;
    cin>>rootval;
    treenode<int>* root=new treenode<int>(rootval);
    cout<<"enter the number of child"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        treenode<int>* child=takeinput();
        root->child.push_back(child);

    }
    return root;
}
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
int numcount(treenode<int>* root){
    int ans=1;
    for(int i=0;i<root->child.size();i++){
        ans += numcount(root->child[i]);
    }
    return ans;
}
void depthofnode(treenode<int>* root,int k){
    if(k==0){
        cout<<root->data<<" , ";
        return;
    }
    for(int i=0;i<root->child.size();i++){
        depthofnode(root->child[i],k-1);
    }
}
int leafnode(treenode<int>* root){
    if(root == NULL)    return -1;
    int ans=0;
  
    for(int i=0;i<root->child.size();++i){
          if(root->child[i] == NULL){
            ans++;
        }
        leafnode(root->child[i]);
    }
    return ans;

}
void preorder(treenode<int>* root){
    cout<<root->data<<" ";
    for(int i=0;i<root->child.size();++i){
        preorder(root->child[i]);
    }
}
void postorder(treenode<int>* root){
    for(int i=0;i<root->child.size();++i){
        postorder(root->child[i]);
        cout<<root->child[i]->data<<" ";
    }
    cout<<root->data<<" ";
}
void deletenode(treenode<int>* root ){
    for(int i=0;i<root->child.size();i++){
        deletenode(root->child[i]);
    }
    delete root;
}
int nodesum(treenode<int>* root){
    if(root == NULL)    return 0;
    int res=0;
    for(int i=0;i<root->child.size();i++){
        // res += root->child[i];
        res += root->data;
        nodesum(root->child[i]);
    }
    return res;
}
int main(){
// treenode<int>* root=new treenode<int>(1);
// treenode<int>* n1=new treenode<int>(2);
// treenode<int>* n2=new treenode<int>(3);
// treenode<int>* n3=new treenode<int>(4);
// treenode<int>* n4=new treenode<int>(5);
// root->child.push_back(n1);
// root->child.push_back(n2);
// root->child.push_back(n3);
// root->child.push_back(n4);
 treenode<int>* root=takeinput();
preorder(root);
deletenode(root);

}