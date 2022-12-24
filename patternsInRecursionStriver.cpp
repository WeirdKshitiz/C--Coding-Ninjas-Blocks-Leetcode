//PRINT ALL SUBSEQUENCES THAT RESULT TO SUM
// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
void allSubsequence(int arr[],vector<int>&ds,int n,int index,int s,int sum){
	if(index==n){
        if(s==sum){
		for(auto i:ds){
			cout<<i<<" ";
		}
		cout<<endl;
        }
        return;
        }
		   //take or  pick the particular index into the subsequence
	ds.push_back(arr[index]);
    s+=arr[index];
	allSubsequence(arr,ds,n,index+1,s,sum);
	s-=arr[index];
	ds.pop_back();
    //not pick,or not take condition,this element is not added to your subsequence
	allSubsequence(arr,ds,n,index+1,s,sum);

	}
 


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int>ds;
	allSubsequence(arr,ds,n,0,0,2);
    // 0=index
    // 0=initial sum
    // 2=sum we need
}



//PRINT ANY SUBSEQUENCE THAT RESULTS TO SUM


// #include <iostream>
// #include <vector>
// using namespace std;

// bool allSubsequence(int arr[],vector<int>&ds,int n,int index,int s,int sum){
// 	if(index==n){
//         //if condition satisfied
//         if(s==sum){
// 		for(auto i:ds){
// 			cout<<i<<" ";
// 		}
// 		cout<<endl;
//         return true;
//         }
//         //condition not satisfied
//         return false;
//         }
// 		   //take or  pick the particular index into the subsequence
// 	ds.push_back(arr[index]);
//     s+=arr[index];
// 	if(allSubsequence(arr,ds,n,index+1,s,sum)){
//         return true;
//     }
//     //if true ,down below doesnt matter anymore
// 	s-=arr[index];
// 	ds.pop_back();
//     //not pick,or not take condition,this element is not added to your subsequence
// 	if(allSubsequence(arr,ds,n,index+1,s,sum)){
//         return true;
//     }
// return false;
// 	}
 


// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	vector<int>ds;
// 	allSubsequence(arr,ds,n,0,0,2);
//     // 0=index
//     // 0=initial sum
//     // 2=sum we need
// }



//Q.COUNT THE SUBSEQUENCE WITH SUM=2


// #include <iostream>
// #include <vector>
// using namespace std;

// int allSubsequence(int arr[],int n,int index,int s,int sum){
// 	if(index==n){
//         //if condition satisfied
//         if(s==sum){
//         return 1;
//         }
//         //condition not satisfied
//         else return 0;
//         }
	
//     s+=arr[index];
// 	int l=allSubsequence(arr,n,index+1,s,sum);
  
//     //if true ,down below doesnt matter anymore
// 	s-=arr[index];

//     //not pick,or not take condition,this element is not added to your subsequence
// 	int r=allSubsequence(arr,n,index+1,s,sum);

// return l+r;
// 	}
 


// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	vector<int>ds;
// 	cout<<allSubsequence(arr,n,0,0,2);
//     // 0=index
//     // 0=initial sum
//     // 2=sum we need
// }
