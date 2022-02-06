#include<iostream>
using namespace std;
int n=100;
class stack{
	private:
		int* arr;
		int top;
	public:
		stack(){
			arr=new int[n];
		}
		void push(int val){
			if(top==top-1){
				cout<<"stack is overflow"<<endl;
				return;			
			}
			top++;
			arr[top]=val;
			
		}
		void pop(int x){
			if(top==-1){
				cout<<"no element"<<endl;
				return;
			}
			top--;
			arr[top]=x;
		}
	
};
int main(){
	stack s;

	s.pop(4);

	
	
}
