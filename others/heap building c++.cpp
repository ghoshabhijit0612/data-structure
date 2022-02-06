#include<iostream>
using namespace std;
void heaptify(int arr[],int n,int i){
	int largest=i;//root
	int l =2*i +1; //left root
	int r =2*i +2; //right root
	//if left child is larger than root
	if(l<n && arr[l]>arr[largest]){
		largest=l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest=r;
	}
	if(largest != i){
		swap(arr[i],arr[largest]);
		heaptify(arr,n,largest);
	}
}
void buildheap(int arr[],int n){
	//index of first nonleaf node
	int startidx=(n/2)-1;
	for(int i=startidx;i>=0;i--){
		heaptify(arr,n,i);
	}
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={1,3,5,4,5,13,10,9,8,15,17};
	int n=sizeof(arr)/sizeof(arr[0]);
	buildheap(arr, n);
	print(arr,n);
	return 0;
}
