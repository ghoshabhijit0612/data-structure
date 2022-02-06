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
	student s  ;
	s.display();
	student s1(18);
	student s3(13);
	s3=s1;//copy constructor//
	s3.display();
}
