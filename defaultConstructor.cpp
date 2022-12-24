#include <iostream>
using namespace std;
#include "student.cpp"
int main(){

student s1;

s1.display();

student s2;

student *s3=new student;
s3->display();

cout<<"Parameterized constructors demo"<<endl;
student s4(10);

s4.display();

student *s5=new student(101);
s5->display();


student s6(20,1002);
s6.display();
return 0;
}