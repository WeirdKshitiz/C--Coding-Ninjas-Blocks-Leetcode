#include <iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"Hello love babbar"<<endl;
    }
    
      void sayHello(string name){
        cout<<"Hello love babbar"<<name<<endl;
    }
    
};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }
    void operator+(B &obj){
        int value1=this->a;
        int value2=obj.a;
cout<<"output"<<value2-value1<<endl;
    }
};
int main(){
A obj;
obj.sayHello();
cout<<endl;
return 0;
}