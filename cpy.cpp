#include<iostream>
using namespace std;
class Bank{
	int ACNO;
	string name;
	float balance;
public:
    Bank(int accno,string n,float bal){
    ACNO=accno;
    name=n;
    balance=bal;
	}
	Bank(const Bank&b){
	ACNO=b.ACNO;
	name=b.name;
	balance=b.balance;
	}
    void display(){
    	cout<<"Acount Number:"<<ACNO<<endl;
    	cout<<"Account Holder"<<name<<endl;
    	cout<<"balance"<<balance<<endl; 
	}	
};
int main(){
	Bank b1(12345,"Partha",25000.70);
	Bank b2(b1);
	cout<<"Bank details(original object)"<<endl;
	b1.display();
	cout<<"\n Balance Detaile(copy object)"<<endl;
	b2.display();
	return 0;
}
