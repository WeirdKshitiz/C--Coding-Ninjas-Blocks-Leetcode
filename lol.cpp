#include <iostream>
using namespace std;
void mergeArray(int arr1[],int arr2[],int m,int n,int combo[]){
	vector<int>v;
	for(int i=0;i<n;i++){
		v.push_back(arr1[i]);
	}
}
int main(){
int t;
cin>>t;
int m;
cin>>m;
int arr1[m];
for(int i=0;i<m;i++){
	cin>>arr1[i];
}
int n;
cin>>n;
int arr2[n];
for(int i=0;i<n;i++){
	cin>>arr2[i];
}
int combo[m+n];
mergeArray(arr1,arr2,m,n,combo);
for(int i=0;i<n+m-1;i++){
			cout<<combo[i]<<" ";
		}
		cout<<combo[n+m-1];
cout<<endl;
return 0;
}