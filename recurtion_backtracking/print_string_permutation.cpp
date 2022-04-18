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
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include<bits/stdc++.h>
using namespace std;
void permutation(string s,int l,int len){
	if(len == 0){
		return;
	}
	if( l== len){
		cout<<s<<endl;
	}
	for(int i=l;i<=len;++i){
		swap(s[l],s[i]);
		permutation(s,l+1,len);
		swap(s[l],s[i]);
		
	}
}
int main(){
    int i_am_noob = 1;
	// cin >> t;

	while(i_am_noob--)
	{
	//write your code
	string s;
	int n;
	cout<<"enter the size"<<" ";
	cin>>n;
	cin>>s;
	int len = s.size();
	permutation(s,0,len-1);



	}




}


