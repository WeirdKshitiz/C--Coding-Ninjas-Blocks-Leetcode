class student
{
    public:
int rollNumber;

private:
int age;

public:

//default constructor 
student(){
cout<<"Constructor 1 called!"<<endl;

}

//parameterized
student(int r){
    cout<<"Constructor 2 called";
    rollNumber=r;
}

student(int a ,int r){

}




void display(){
    cout<<age<<" "<<rollNumber<<endl; 
}

int getAge(){
    return age;
}

void setAge(int a,int password){
    if(password!=123){
        return;
    }
    if(a<0){
        return;
    }
    age=a;
}

};
