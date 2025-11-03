#include<iostream>
using namespace std;
class laptop{
	public:
		string brand;
		string processor;
		int ram;
		void display(){
			cout<<"Brand:"<<brand<<",Processor:"<<processor<<",Ram:"<<ram<<"GB"<<endl;
		}
};
int main(){
	laptop l1, l2;
	l1.brand="Acer";
	l1.processor="Intel i9";
	l1.ram=64;
	l2.brand="Asus";
	l2.processor="AMD Ryzen 9";
	l2.ram=64;
	l1.display();
	l2.display();
	return 0;
}
