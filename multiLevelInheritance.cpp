#include <iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

//single inheritance
class Dog:public Animal{

};

//multilevel inheritance
class GermanShepherd:public Dog{


};
int main(){
GermanShepherd g;
g.speak();
cout<<endl;
return 0;
}