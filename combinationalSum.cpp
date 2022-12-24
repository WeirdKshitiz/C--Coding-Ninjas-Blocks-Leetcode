
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
// void combinationalSum(int index,vector<int>&ans,vector<int>&ds,int target,int arr[],int n){
   
//      if(target==0){
//       ans.push_back(ds);
//      return;   
//     }
//   for(int i=index;i<arr.size();i++){
//     if(i>index && arr[i]==arr[i-1]) continue;
//     if(arr[i]>target) break;
//     ds.push_back(arr[i]);
//  combinationalSum(i+1,ans,ds,target,arr,n);
//  ds.pop_back();
//   }
// }


void subsequence(int index,vector<int>&ds,int target,int arr[],int n)
{
if(target == 0)
    {
        // ans.push_back(ds);     
        for(int i = 0; i < ds.size();i++)
        {
            cout<<ds[i]<<",";
        }
        cout<<endl;
        return;
    }
    for(int i = index; i < n; i++)
    {
        if(i>index &&arr[i] == arr[i-1]) continue;//to avoid duplicate element.
        if(arr[i] > target) break;
        ds.push_back(arr[i]);
        subsequence(i+1,ds,target-arr[i],arr,n);
        ds.pop_back();
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int>ds;
// vector <int>ans;
subsequence(0,ds,2,arr,n);

return 0;
}

