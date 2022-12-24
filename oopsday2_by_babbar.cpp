#include <iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
  
    int age;

    public:
    int getAge(){
        return this->age;
    }
   void setWeight(int w){
        this->weight=w;
    }
};

//inheritance
class Male:public Human{
    public:
    string color;
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};




//encapsulation

// class Student{

//     private:
//     string name;
//     int age;
//     int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
// };
int main(){

    //encapsulation call
// Student first;


//inheritance

Male m1;
cout<<m1.height<<endl;






// Male object1;
// cout<<object1.age<<endl;
// cout<<object1.weight<<endl;
// cout<<object1.height<<endl;


// cout<<object1.color<<endl;
// object1.sleep();
// cout<<"it's all ok!";
// cout<<endl;
// return 0;
}