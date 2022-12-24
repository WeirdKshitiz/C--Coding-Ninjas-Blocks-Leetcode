///refer to codingblocks all subsequences question for string question on same

#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;
void allSubsequence(int arr[],vector<int>ds,int n,int index){
	if(index==n){
		for(auto i:ds){
			cout<<i<<" ";
		}
		if(ds.size() == 0)
		{
			 cout<<"{}";
		}
		cout<<endl;
		return;
	}
    //take or  pick the particular index into the subsequence
	ds.push_back(arr[index]);
	allSubsequence(arr,ds,n,index+1);
	ds.pop_back();
    //not pick,or not take condition,this element is not added to your subsequence
	allSubsequence(arr,ds,n,index+1);

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int>ds;
	allSubsequence(arr,ds,n,0);
}