#include<bits/stdc++.h>
using namespace std;
class student{
	int age;
	char *name;
	public:
		student(int age,char *name){
			this->age=age;
		//	this->name=name;//shallow  copy
		this->name=new char[strlen(name)+1];//deep cpy dynamic array create
		strcpy(this->name,name);
		}
		student(student s){
//			this->age=s.age;//shallow cpy
//			this->name=s.name;
			this->age=s.age;
			this->name= new char[(strlen(name))+1];
			strcpy(this->name,name);
		}
		void display(){
			cout<<name<<" "<<age<<endl;
		}
};
int main(){
	char name[]="abcd";
	student s1(84, name);
	s1.display();
	student s2(s1);	
//	name[3]='e';
//	student s2(34,name);
	s2.display();   
}
