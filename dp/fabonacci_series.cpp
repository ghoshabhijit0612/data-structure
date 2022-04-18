/*
* Note: This template uses some c++11 functions , so you have to compile it with c++11 flag.
*       Example:-   $ g++ -std=c++11 c++Template.cpp
*
* Author : Abhijit Ghosh
* Handle: confusedboy
**
***
****
*****
******
*******
********
*********
*******
*****
***
**
*
*/

/********   All Required Header Files ********/
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int fib(int n) {
        int *ans=new int [n+1];
        ans[0] = 0;
        ans[1] =1;
        for(int i=2;i<=n;i++){
            ans[i] = ans[i-1]+ans[i-2];
        }
        return ans[n];
    }
int febo_helper(int n,int *ans){
	if(n<=1)	return n;
	//cheak answer already exist or not
	if(ans[n] != -1){
		return ans[n];
	}
	//store the answer
	int a = febo_helper(n-1,ans);
	int b = febo_helper(n-2,ans);
	ans[n] = a+b;
	return ans[n];
	
}
int febo(int n){
	int *ans = new int[n+1];
	for(int i=0;i<=n;i++){
		ans[i]=-1;
	}
	return febo_helper(n,ans);
}
int main(){
    int i_am_noob = 1;
	// cin >> i_am_noob;
	while(i_am_noob--)
	{
	//write your code
	int n;
	cin>>n;
//	for(int i=0;i<=n;i++){
//		cout<<febo(i)<<endl;
//	}
//	cout<<febo(n)<<endl;
cout<<fib(6)<<endl;	



	}




}


