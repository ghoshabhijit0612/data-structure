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
int sum(treenode<int>* root){
    if(root == NULL)    return 1;
    int res=0;
    for(int i=0;i<root->child.size();i++){
        res += root->child[i]->data;
        sum(root->child[i]);
    }
    return res;
}
int main(){
treenode<int>* root=new treenode<int>(1);
treenode<int>* n1=new treenode<int>(2);
treenode<int>* n2=new treenode<int>(3);
root->child.push_back(n1);
root->child.push_back(n2);
// treenode<int>* root=takeinput();
print(root);
int x=numcount(root);
cout<<x;
}