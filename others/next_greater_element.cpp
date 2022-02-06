#include<bits/stdc++.h>
using namespace std;
void NGE(int arr[],int n){
	int next,i,j;
	for(i=0;i<n;i++){
		next=-1;
		for(j=i;j<n;j++){
			if(arr[j]>arr[i]){
				next=arr[j];
				cout<<arr[i]<<"--"<<next<<endl;
				break;
			}
			
		}
			cout<<arr[i]<<"--"<<next<<endl;
		
	}
}
int main(){
	int arr[]={1,45,6,34,8,9};
	int n=sizeof(arr)/sizeof(arr[1]);
	NGE(arr,n);
	return 0;
	
}
