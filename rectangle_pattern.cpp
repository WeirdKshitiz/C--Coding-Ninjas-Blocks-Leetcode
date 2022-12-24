#include <iostream>
using namespace std;
int main(){
    int rows;
    cin>>rows;
    int cols;
    cin>>cols;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=cols;j++){
        cout<<"*";
    }
    cout<<endl;
    
}
return 0;
}