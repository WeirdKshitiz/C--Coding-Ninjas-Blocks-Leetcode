// // #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;
// void recurPermute(vector<int>&ds,int nums[],bool freq[],int n){
//     if(ds.size()==n){
//            for(int i = 0; i < ds.size();i++)
//         {
//             cout<<ds[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }

//     for (int i = 0; i <n; i++) {
//         if (!freq[i]) {
//             //when we push the element in the ds 
//           ds.push_back(nums[i]);
//           //we mark it 1,to show that it's visited
//           freq[i] = 1;
//           recurPermute(ds, nums, freq,n);
//           freq[i] = 0;
//           ds.pop_back();
//         }
//       }
// }
// int main(){
// int n;
// cin>>n;
// int nums[n];
// for(int i=0;i<n;i++){
//     cin>>nums[i];
// }
// vector<int>ds;
// bool freq[n];
// for(int i=0;i<n;i++) 
// freq[i]=0;
// recurPermute(ds,nums,freq,n);

// return 0;
// }











// // // #include <bits/stdc++.h>
// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // void printAllPermutations(int index,int arr[],vector<int>ds,int n){
// // if(index==n){
    
// //     for(int i=0;i<n;i++){
// //         ds.push_back(arr[i]);
// //     }
// //     for (auto i:ds){
// //         cout<<i;
// //     }
// //     cout<<endl;
    
// //     return;
// // }
// // for(int i=index;i<n;i++){
// //     swap(arr[index],arr[i]);
// //     printAllPermutations(index+1,arr,ds,n);
// //     swap(arr[index],arr[i]);
// // }
// // }
// // int main(){
// // int n;
// // cin>>n;
// // int arr[n];
// // for(int i=0;i<n;i++){
// //     cin>>arr[i];
// // }
// // vector<int>ds;
// // printAllPermutations(0,arr,ds,n);

// // cout<<endl;
// // return 0;
// // }














// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
void recurPermute(vector<int>&ds,int nums[],bool freq[],int n){
    if(ds.size()==n){
           for(int i = 0; i < ds.size();i++)
        {
            cout<<ds[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for (int i = 0; i <n; i++) {
        if (!freq[i]) {
            //when we push the element in the ds 
          ds.push_back(nums[i]);
          //we mark it 1,to show that it's visited
          freq[i] = 1;
          recurPermute(ds, nums, freq,n);
          freq[i] = 0;
          ds.pop_back();
        }
      }
}
int main(){
int n;
cin>>n;
int nums[n];
for(int i=0;i<n;i++){
    cin>>nums[i];
}
vector<int>ds;
bool freq[n];
for(int i=0;i<n;i++) 
freq[i]=0;
recurPermute(ds,nums,freq,n);

return 0;
}











