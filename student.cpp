#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		float balance;
        int m1, m2, m3;
        float average(){
        	return(m1+m2+m3)/3;
		}
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Roll Number:"<<rollno<<endl;
			cout<<"Average:"<<average()<<endl;
		}
};
int main(){
	student s1;
	s1.rollno=163;
	s1.name="Kishore Sivakumar";
	s1.m1=90;
	s1.m2=96;
	s1.m3=98;
	s1.display();
	return 0;
}
