 #include<iostream>
 using namespace std;
 class animal{
 	public:
 		int age;
 		int height;
 	public:
	 	void bark(){
	 		cout<<" ovu-vou"<<endl;
		 }	
 };
 class human{
 	public:
 		int color;
 	public:
	 void speak(){
	 	cout<<"HI"<<endl;	 }	
 };
 class mix: public animal,public human{
 	
 };
 int main(){
 	mix a;
	 a.speak();
	 a.bark(); }
