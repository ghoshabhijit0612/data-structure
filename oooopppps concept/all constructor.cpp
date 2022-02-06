#include<iostream>
using namespace std;
class student{
	public:
		int roll;
		int age;
	public:
	~student(){
		cout<<"destructor call"<<endl;
	}		
	student(){
		roll=10;
		age=10;
	}
	student(int roll){
		this->roll=roll;
	}
	student(int r,int a){
		roll=r;
		age=a;
	}
	void display(){
		cout<<roll<<" "<<age<<endl;
	}
};
int main(){
	student s1;// constructor
	student s2(45);//costructor 2 call

	student s3(23,65);// paramiterized cons call
	student s4(s3); // copy cons call
	s1=s2; //assignment cons call
	student s5=s4; //copy cons call

}
