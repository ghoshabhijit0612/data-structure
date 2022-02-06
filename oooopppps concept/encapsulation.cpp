#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int age;
		int height;
	public:	
	int getage(){
		return this->age;
	}	
	void display(){
		cout<<this->age;
	}
};
int main(){
	student s1;
	s1.getage();
	s1.display();
}
