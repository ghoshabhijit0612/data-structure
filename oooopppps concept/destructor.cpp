#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
	public:
		~student(){//-----destructor call----its call at the end of the main funtion
			cout<<"destructor call"<<endl;
		}
		student(){
			name="";
			roll=0;
		}
		student(int roll){
			this->roll=roll; 
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
	s3=s1;
	s3.display();
}
