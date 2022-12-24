#include <iostream>
using namespace std;
#include "student.cpp"



int main(){
student s1;
student s2;

student s3,s4,s5;

s1.rollNumber=101;
//s1.age=24;

cout<<"S1 AGE: "<<s1.getAge()<<endl;
cout<<"S1 ROLL NUMBER: "<<s1.rollNumber<<endl;


s1.display();
s2.display();

student *s6=new student;
// (*s6).age=23;
(*s6).rollNumber=104;

(*s6).display();
cout<<"S6 age: "<<s6->getAge()<<endl;




cout<<endl;
return 0;
} 