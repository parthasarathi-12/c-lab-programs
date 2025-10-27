#include<iostream>
#include<string.h>
using namespace std;
class patient{
	char*name;
	int age;
	char*disease;
public:
	patient(const char*n,int a,const char*d){
	name=new char[strlen(n)+1];
	strcpy(name,n);
	age=a;
	disease=new char[strlen(d)+1];
	strcpy(disease,d);
	}
void display(){
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Diesease:"<<disease<<endl;
}
~patient(){
	delete[]name;
	delete[]disease;
}
};
int main(){
	char name[50],disease[50];
	int age;
	cout<<"Enter patient name:";
	cin.getline(name,50);
	cout<<"enter disease:";
	cin.getline(disease,50);
	cout<<"Enter patient age:";
	cin>>age;
	patient p(name,age,disease);
	p.display();
	return 0;
}
