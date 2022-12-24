#include <iostream>

using namespace std;
void tripletSum(int arr[],int n,int x){
    
    
     //sort krlena agar nhi ho to
    sort(arr,arr+n);

    for(int i=0;i<n-1;i++){
        int y=x-arr[i];
        int low=i+1;
        int high=n-1;
        while(low<high){
            if(arr[low]+arr[high]==y){
            cout<<"pair"<<arr[i]<<" "<<arr[low]<<" "<<arr[high]<<" "<<"are triplets"<<endl;
high--;
low++;}
        else if(arr[low]+arr[high]>y){
            high--;
        }
        else if (arr[low]+arr[high]<y){
            low++;
        }
            }
        }

        
    }
   



int main(){
int n,x;
cin>>n;

    cin>>x; 
int arr[n];
for(int i=0;i<n;i++){
        cin>>arr[i];
    }
tripletSum(arr,n,x);
cout<<endl;
return 0;
}

