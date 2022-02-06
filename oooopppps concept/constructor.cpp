#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
	public:
		student(){
			name="";//default call constructor
			roll=0;
		}
		student(int roll){
			this->roll=roll; //use this keyword to different the variables
		}		
		void display(){
			cout<<name<<' '<<roll<<endl;
		}
};
int main(){
	student s;
	s.display();
	student s1(18);
	s1.display();
}
