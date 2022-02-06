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
 class puchki : public animal_son{
 	
 };
 int main(){
 	puchki a;
 	a.bark(); }
