#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	queue<string>q;
 	q.push("1");
	for(int i=0;i<n;i++){
		string s = q.front();
		cout<<s<<endl;
		q.pop();
		q.push(s+'0');
		q.push(s+'1');
	}
	return 0;



}
