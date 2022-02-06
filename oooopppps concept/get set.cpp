#include<iostream>
using namespace std;
class student{
	public:
		string name;
	private:
		int roll;	
	public:
		int getage(){
		return roll;
		}	
		void setage(int a){
			if(a<0)	return;
			roll=a;
		}
		void display(){
			cout<<roll<< " "<<name;
		}
};
int main(){
	student s;
	
	student *s1=new student;
	s.name="abhi";
	cout<<s.name;
	s.setage(5);
	cout<<s.getage();
	s1->name="dip";
	cout<<s1->name;
	s1->setage(54);
	cout<<s1->getage();
	s1->display();
}
