#include<bits/stdc++.h>
using namspace std;
template<typename T>
class treenode{
    public:
    T data;
    vector<treenode<T>*>child;
    public:
    treenode(T data){
        this->data=data;
    }
};
treenode<int>* takeinput(treenode<int>* root){
int rootval;
cin>>rootval;
treenode<int>* root=new treenode<int>(rootval);
int childs;
cout<<"enter the number of child" ;
for(int i=0;i<)
}

int main(){
    treenode<int>* root=new treenode<int>(8);
}
