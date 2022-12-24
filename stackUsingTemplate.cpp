#include <iostream>
using namespace std;
template <typename T>
class stackUsingArray{
    T *data;
    int nextIndex;
    int capacity;//stack ka total size

    public:
//     stackUsingArray(int totalSize){
//         //totalSize represents ki humein kitne total size ka stack bnana hai
// data=new int[totalSize];  //creating the array
// nextIndex=0; //initializing index
// capacity=totalSize;

//     }

    stackUsingArray(){
        //totalSize represents ki humein kitne total size ka stack bnana hai
data=new T[4];  //creating the array
//4 is the capacity 

nextIndex=0; //initializing index
capacity=4;

    }







    //return the number of elements in my stack
    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        if(nextIndex==0){
            //a function to check if my stack is empty or not
            return true;
        }
        else{
            return false; //if there are elements
        }
    }


    //insert element
    void push(T element){
        if(nextIndex==capacity){
            int *newData=new T[2*capacity]; //dynamic stack
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }

            capacity*=2;//capacity ko double
            delete [] data; //old data ko delete
            data=newData;


            // cout<<"Stack is full"<<endl;
            // return;
        }
        data[nextIndex]=element; //next index pe element insert
        nextIndex++;//move to next index

    }


    //delete element

    T pop(){
        if(isEmpty()){
            cout<<"Stack Is Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }




    T top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 0;
       
        }
         return data[nextIndex-1];
    }
};