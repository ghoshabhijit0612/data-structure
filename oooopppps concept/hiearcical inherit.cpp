#include<iostream>
using namespace std;
class a{
	public:
		void fun(){
			cout<<"inside fun a"<<endl;
		}
};
class b : public a{
	public:
		void fun2(){
			cout<<"inside fun b"<<endl;
		}
};
class c :public a{
	public:
		void fun3(){
			cout<<"inside fun c"<<endl;
		}
};
int main(){
c a1;
a1.fun3();
}

