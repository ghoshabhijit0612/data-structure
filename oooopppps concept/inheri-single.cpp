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
 class animal_son : public animal{
	
 };
 int main(){
 	animal_son a;
 	a.bark(); }
