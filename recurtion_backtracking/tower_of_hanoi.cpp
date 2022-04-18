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
void tower_of_hanoi(int start,int end,char source ,char helper,char destination){
	//base case
	if( start > end){
		return ;
	}
	tower_of_hanoi(start,end-1,source,destination,helper);
	cout<<"move disk "<<end <<" from "<<source<<" to "<<destination<<endl;
	tower_of_hanoi(start,end-1,helper,source,destination);
}
int main(){
    int i_am_noob = 1;
	// cin >> t;

	while(i_am_noob--)
	{
	//write your code
	//a b c are base;
	// 1-2 are number of disk
	tower_of_hanoi(1,3,'a','b','c');



	}




}


