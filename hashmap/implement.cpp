#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>mp;
     pair<string,int>p = make_pair("Abhi",3);
     mp.insert(p);
     mp["AbhiJ"] = 2;
     cout<<mp["Abhi"]<<endl;
    
}