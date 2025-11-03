#include<iostream>
using namespace std;
class Employee{
	public:
		int empid;
		string name;
		float salary;
		void setEmployee(int id, string n, float s){
			empid=id;
			name=n;
			salary=s;
		}
		void displayEmployee();
};
void Employee::displayEmployee(){
	cout<<"EmployeeID: "<<empid<<", Name: "<<name<<", Salary: Rs."<<salary<<endl;
}
int main(){
	Employee e1, e2;
	e1.setEmployee(101, "Ravi", 50000.75);
	e2.setEmployee(102, "Ragul", 62000.50);
    e1.displayEmployee();
    e2.displayEmployee();
    return 0;
}
