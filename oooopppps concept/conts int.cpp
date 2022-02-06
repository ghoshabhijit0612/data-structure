#include<iostream>
using namespace std;
class student{
	public:
		char *name;
	 const int roll ;
	 student(int r) : roll(r){
	 
	 }
	void display(){
		cout<<name<<" "<<roll;
	}	
};
int main(){
	student s1(78);
	char str[]="abhi";
	s1.name=str;
//	s1.roll=34;
	s1.display();
}
