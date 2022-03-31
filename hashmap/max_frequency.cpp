#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int ,int>count;
    int arr[9] = {1, 2,4,4,4,4, 3, 1, 2};
    int maxfre =0;
    int maxans = 0;
    
    for(int i = 0;i<9 ;i++ ){
        count[arr[i]]++;
        maxfre = max(maxfre , count[arr[i]]);
    }
    for(int i=0;i<9;i++){
        if(maxfre == count[arr[i]]){
            maxans = arr[i];
            cout<<arr[i];
            break;
        }
    }
}