#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0] = -1;
        size=0;
    }

    void insert(int data){
        size = size+1;
        int index = size;
        arr[index] = data;
        
        while(index>1){
            int parent = index/2;
            if(arr[parent] <arr[index]){
                swap(arr[parent],arr[index]);
            }
            else break;
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
void deletion(){
    if(size == 0){
        cout<<"noting to delete"<<endl;
        return;
}
    arr[1] == arr[size];
    size--;
    //root node ro his correct position

    int i=1;
    while( i< size){
        int leftindex = 2*i;
        int rightindex = 2*i +1;
        if((leftindex < size) && (arr[i] <arr[leftindex])){
            swap(arr[i],arr[leftindex]);
            i=leftindex;
        }
        else if((rightindex <size )&&( arr[i] < arr[rightindex])){
            swap(arr[i],arr[rightindex]);
            i= rightindex;
        }
        else return;
    }
}

};
void heapify(int arr[],int size_arr,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i +1;
    if(left <= size_arr && largest< arr[left]){
        largest = left;
    }
     if((right <= size_arr) && arr[largest] <arr[right]){
        largest = right;
    }
    if(largest !=i){
        swap(arr[largest],arr[i]);
        heapify(arr,size_arr,largest);
    }
    
}
int main(){
    heap h;
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.insert(6);
    h.insert(8);
    h.print();
    h.deletion();
    h.print();
    int arr[6] = {-1 , 2 , 1 ,8,7,5};
    int n=5;
    for(int i= n/2; i>0 ;i-- ){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
