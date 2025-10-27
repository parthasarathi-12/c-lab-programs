#include<iostream>
using namespace std;
class sample{
	public:
     void show(){
    cout<<"Object is working properly"<<endl;
	 }
	 ~sample(){
	 	cout<<"destructor called: object destroyed"<<endl;
	 }
};
int main(){
	cout<<"creating object obj1.."<<endl;
	sample obj1;
	obj1.show();
	cout<<"creating object obj2"<<endl;
	sample obj2;
	obj2.show();
	cout<<"end of program,objects will be destroyed automatically "<<endl;
	return 0;
	}
