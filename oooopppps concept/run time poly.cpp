#include<iostream>
using namespace std;
class animal{
	public:
		void speak(){
			cout<<"speak"<<endl;
		}
};
class dog : public animal{
	public:
		void speak(){
			cout<<"bark"<<endl;
		}
};
int main(){
	dog d;
	d.speak();
}

