#include<iostream>
using namespace std;
class Employee{
	int id;
	string name;
	float salary;
public:
	Employee(){
		id=101;
		name="PARTHA";
		salary=700000;
		}
void display(){
      cout<<"Employee Id:"<<id<<endl;
      cout<<"Eployee Name:"<<name<<endl;
      cout<<"Employee salary:"<<salary<<endl;
	  }
	
};
int main(){
	Employee Emp;
	cout<<"Employee details using default constructor"<<endl;
	Emp.display();
	return 0;
}
