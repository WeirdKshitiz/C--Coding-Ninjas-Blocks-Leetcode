#include <iostream>
using namespace std;
template <typename type>
class stack{
    type*arr;
    int counter;

    public:
    stack(int s){
        int size=s;
arr=new type[s];
counter=0;
    }
//push
bool push(type d){
    if(counter>=size-1){
        cout<<"Stack is full";
        return false;
    }
    else{
        arr[++counter]=d;
        return true;
    }
}






};

int main(){
stack <int> s(10);
cout<<endl;
return 0;
}