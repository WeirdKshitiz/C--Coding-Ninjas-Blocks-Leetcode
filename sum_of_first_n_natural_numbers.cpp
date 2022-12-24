#include <iostream>
using namespace std;
int sum(int n){
    int tot=0;
    for(int i=0;i<=n;i++){
        tot+=i;
    }
    return tot;

}
int main(){
int n;
cin>>n;
cout<<sum(n);
return 0;
}