#include<iostream>
using namespace std;
class fraction{
	private:
		int numerator;
		int denominator;
	public:
		fraction(int numerator,int denominator){
			this->numerator=numerator;
			this->denominator=denominator;
		}	
		void display(){
			cout<<this->numerator<<"/"<<this->denominator<<endl;
		}
		void add(fraction f2){
			int lcm=denominator * f2.denominator;
			int x=lcm/denominator;
			int y=lcm/f2.denominator;
			  
		}
};
int main(){
	fraction(100,6);
}
