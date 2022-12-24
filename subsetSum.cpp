//brute force


// #include <iostream>
// #include <vector>
// // #include <bits/stdc++.h>
// using namespace std;
// void subsetSumFun(int index,int sum,vector<int>&arr,int n,vector<int>&sumSubset){
//     //index==n means ki hum end of the array mein phunch gye
//     if(index==n){
//         sumSubset.push_back(sum);
//         return;
//     }
// //pick the element
// subsetSumFun(index+1,sum+arr[index],arr,n,sumSubset);

// //dont pick the element
// subsetSumFun(index+1,sum,arr,n,sumSubset);
// }
// int main(){
//     // int n;
//     // cin>>n;
//     // int arr[n];
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     int n=3;
//     vector<int>arr={3,1,2};
// vector<int>sumSubset;
//     subsetSumFun(0,0,arr,n,sumSubset);
//    // here 0 is the index and next 0 is the sum
//    sort(sumSubset.begin(),sumSubset.end());
// for(auto i:sumSubset){
//     cout<<i<<" ";
// }
// cout<<endl;
// return 0;
// }












//optimal




#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void subsetSum(int index,vector<int>&nums,vector<int>&ds,vector<int>&ans){
    ans.push_back(ds);
    for(int i=index;i<nums.size();i++){
        if(i!=index && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        subsetSum(i+1,nums,ds,ans);
        ds.pop_back();
    }
}
int main(){
int n=6;
vector<int>nums={1,2,2,3,2,3};
vector<int>ds;
vector<vector<int>>ans;
sort(nums.begin(),nums.end());
subsetSum(0,nums,ds,ans);
for(auto i:ans){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}