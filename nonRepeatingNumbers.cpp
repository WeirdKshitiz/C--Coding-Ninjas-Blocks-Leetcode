#include <iostream>
#include <vector>
using namespace std;
int nonRepeat(int arr[],int n){
    int xorans=0;
    for(int i=0;i<n;i++){
        xorans^=arr[i];
    

    //xorans->separate it
    //x & ~(x-1)=>000100

    xorans=xorans & ~(xorans-1); //001
    //separate numbers-> & with the numbers,different
//set1 and set2
    }
int set1=0;
int set2=0;
for(int i=0;i<n;i++){
    if(xorans & arr[i])
        set1^=arr[i];
        else set2^=arr[i];
    }
vector<int>ans;
ans.push_back(set1);
ans.push_back(set2);
sort(ans.begin(),ans.end());

return ans;

}



int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
nonRepeat(arr,n);
cout<<endl;
return 0;
}