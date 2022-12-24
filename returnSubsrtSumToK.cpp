#include <iostream>
using namespace std;
bool subsetSum(int arr[],int n,int k){
    if(k==0){
        return true;
    }
    if(n<0 || k<0){
        return false;
    }

   // Case 1. Include the current item `A[n]` in the subset and recur
    // for the remaining items `n-1` with the remaining total `k-A[n]`
    bool include = subsetSum(arr, n - 1, k - arr[n]);
 
    // Case 2. Exclude the current item `A[n]` from the subset and recur for
    // the remaining items `n-1`
    bool exclude = subsetSum(arr, n - 1, k);

    // return true if we can get subset by including or excluding the
    // current item
    return include || exclude;
}
int main(){
int arr[]={7,3,2,5,8};
int n=sizeof(arr)/sizeof(arr[0]);
int k=14;
if(subsetSum(arr,n-1,k)){
    cout<<"OK there exists a subset!";
}
else{
    cout<<"aosa to kuch na mila hmko bhaiya ji!";
}

cout<<endl;
return 0;
}