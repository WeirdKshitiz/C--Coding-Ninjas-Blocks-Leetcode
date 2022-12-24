#include <iostream>
using namespace std;
void merge(int input[],int begin,int mid,int end){
    int output[end-begin+1];
    int i=begin;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=end){
        if(input[i]<input[j]){
            output[k]=input[i];
            i++;
            k++;
        }
        else{
            output[k]=input[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        output[k]=input[i];
        k++;
        i++;
    }
     while(j<=end){
        output[k]=input[j];
        k++;
        j++;
    }


    //jab main 2nd half merge krne jaa rha hun
    //aur fir maine use vaapis use copy krni hai input mein
    //so vo value 0 pe nhi begin pe jaayegi
    int m=0;
    for(int i=begin;i<=end;i++){
        input[i]=output[m];
        m++;
    }
}
void mergeSort(int input[],int beginindex,int endIndex){
    if(beginindex>=endIndex){
        return; 
    }
    int mid=(beginindex+endIndex)/2;
mergeSort(input,beginindex,mid);
mergeSort(input,mid+1,endIndex);

merge(input,beginindex,mid,endIndex);
}
int main(){
int arr[]={4,2,6,3,7,5};
mergeSort(arr,0,5);
for(int i=0;i<6;i++){
    cout<<arr[i]<<endl;
}
cout<<endl;
return 0;
}