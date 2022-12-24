#include <iostream>
using namespace std;
int main(){
int rows,columns;
cin>>rows>>columns;

for(int i=1;i<=5;i++){
    for(int j=1;j<=4;j++){
     if(i==1 || i==rows){
        cout<<"*";
     }
     else if(j==1 || j==columns ){
        cout<<"*";
     }
     
     else{
        cout<<" ";
     }
    }
   cout<<endl;
 
}


}