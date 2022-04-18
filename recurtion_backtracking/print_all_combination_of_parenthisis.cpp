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
void par(int open,int close , int n,string output){
	if(close == n){
		cout<<output<<endl;
	}
	if(open < n){
		par(open+1,close,n,output+'(');
	}
	if(close < open){
		par(open ,close+1 ,n, output+')');
	}
	
}
int main(){
    int i_am_noob = 1;
	// cin >> t;

	while(i_am_noob--)
	{
	//write your code
	int n;
	cin>>n;
	par(0,0,n,"");



	}




}
  *
/*    ***
     *****
    *******
   *********
  ***********
 *************
***************
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
      ***
      ***
      ***
      ***
      ***
      ***
      ***
      ***
      */


