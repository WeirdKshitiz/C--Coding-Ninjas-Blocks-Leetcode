#include <iostream>
using namespace std;
int maxCircularSum(int arr[],int n){
	if(n==1){
		return arr[0];
	}

	int sum=0;
	
		for(int i=0;i<n;i++){
		sum+=arr[i];
	}


	int curr_max=arr[0];
	int max_sofar=arr[0];
	int curr_min=arr[0];
	int min_sofar=arr[0];



for(int i=1;i<n;i++){
	curr_max=max(curr_max+arr[i],arr[i]);
	max_sofar=max(max_sofar,curr_max);

	curr_min=min(curr_min+arr[i],arr[i]);
	min_sofar=min(min_sofar,curr_min);
}
if(min_sofar==sum)
return sum;


return max(max_sofar,sum-min_sofar);

}
int main(){
int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxCircularSum(arr,n);
}
cout<<endl;
return 0;
}