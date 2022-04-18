#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void maze(string s,int l,int n){
    if( n==0)   return;
    if(l == n){
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        swap(s[l],s[i]);
        maze(s,l+1,n);
        swap(s[l],s[i]);//backtrack
    }
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    maze(s,0,n);
}