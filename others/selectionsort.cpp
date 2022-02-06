#include<iostream>
using namespace std;
int main(){
	int arr[]={1,8,2,4,5,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int min_index;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);
			}
		}
		cout<<arr[i]<<endl;
	}
}
