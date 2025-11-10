#include<iostream>
using namespace std;
class bank{
	public:
		string name;
		int accountno;
		float balance;
        void deposit(float amount){
        	balance+=amount;
		}
		void withdraw(float amount){
			if(amount<=balance){
				balance-=amount;
			}
			else{
				cout<<"Not Enough Balance"<<endl;
			}
		}
void display(){
	cout<<"Name:"<<name<<endl;
	cout<<"Account Number:"<<accountno<<endl;
	cout<<"Balance:"<<balance<<endl;
}
};
int main(){
	bank b1;
	b1.name="Kishore Sivakumar";
	b1.accountno=78346570235788;
	b1.balance=10000;
	b1.deposit(5000);
	b1.withdraw(2900);
	b1.display();
}
