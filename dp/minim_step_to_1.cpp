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
int res(int n,int count){
	
	if( n == 1){
		return res(n,count+1);
	}
	if(n%3 ==0){
//		n = n/3;
		return res(n/3,count+1);
	}
	else if(n%2 ==0){
		
		return res(n/2,count+1);
	}
	else{
//		n=n-1;
		return res(n-1,count+1);
	}
}
void res(int n){
	int count =0;;
	cout<<res(n,count)<<endl;
}
int main(){
    int i_am_noob = 1;
	// cin >> i_am_noob;
	while(i_am_noob--)
	{
	//write your code
	int n;
	cin>>n;
	res(n);



	}




}



