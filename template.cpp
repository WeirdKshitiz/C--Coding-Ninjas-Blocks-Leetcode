#include <iostream>
using namespace std;
#include "Pair.cpp"

int main(){
// Pair<int> p1; //here int is specifying the datatype of T(object)
// p1.setX(10);
// p1.setY(20);

// cout<<p1.getX()<<" "<<p1.getY()<<endl;


// Pair<double> p2;

// p2.setX(100.34);
// p2.setY(34.21);

// cout<<p2.getX()<<" "<<p2.getY()<<endl;



// Pair<char> p3;



//IF WE WANT TO GIVE DIFFERENT DATATYPE TO X AND Y
// Pair<int,double> p1;
// p1.setX(100.34);
// p1.setY(100.34);
//  cout<<p1.getX()<<" "<<p1.getY()<<endl;





//another way
Pair<Pair<int,int>,int>p2;
p2.setY(10);
Pair<int,int>p4;
p4.setX(5);
p4.setY(16);

p2.setX(p4);

//p2.setX=will return the pair ie x and y
//p2.getX().getX()=will return pair x of p2 only.

cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;
return 0;
}