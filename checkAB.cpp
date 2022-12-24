#include <iostream>
#include <stack>
using namespace std;
bool check(int arr[],int n){
    stack<int>s;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            s.push(arr[i]);
        }
        else if(!s.empty() && arr[i]==0){
            s.pop();
        }
        else if(s.empty() && arr[i]==0){
            return 0;
        }
    }

}
int main(){

cout<<endl;
return 0;
}