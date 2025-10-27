#include<iostream>
using namespace std;
class Student{
    int rollno;
    string name;

public:
Student(int r, string n){
    rollno=r;
    name<=n;
}
void display(){
    cout<<"Roll Number"<<rollno<<",Name:"<<name<<endl;
}
};
int main(){
    Student S1(101,"Arjun");
    Student S2(102,"mena");
    S1.display();
    S2.display();
   return 0;
}
























































































