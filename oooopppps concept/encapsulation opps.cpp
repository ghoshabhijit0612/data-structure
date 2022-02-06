#include<iost ream>
using namespace std;
class human{
	public:
		int height;
		int weight;
		int age;
	public:
	int getage(){
		return this->age;
	}	
	int setage(int a){
		this->age=a;
	}

};
class male: public human{
	public:
		int c;
	public:
		void dis(){
			cout<<"a"<<endl;
		}	
};
int main(){
	human a1;
	male a2;
	cout<<a2.height<<endl;
}
