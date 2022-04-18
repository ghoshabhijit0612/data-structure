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
void subsequence(string input,string output){
	//bse case
	if( input.size() == 0){
		cout<<output<<endl;
		return;
	}
	subsequence(input.substr(1),output);
	subsequence(input.substr(1),output + input[0]);
}
int main(){
    int i_am_noob = 1;
	// cin >> t;

	while(i_am_noob--)
	{
	//write your code
	string s;
	cin>>s;
	string output = "";
	subsequence(s,output);
	
	
		
	}
	
	
	
	
}

