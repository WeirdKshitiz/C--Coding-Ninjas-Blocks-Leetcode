//dollar char
#include <iostream>
using namespace std;
int main(){
char c;

int count=0;
cin.get(c);
while(c!='$'){
    count++;
    cin.get(c);
}
cout<<count;

cout<<endl;
return 0;
}


//prime numbers
// #include <iostream>

// using namespace std;
// int main(){
//     int n;
//     cin>>n; 
//     int flag=0;
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         cout<<"not prime"<<endl;
//         flag=1;
//         break;
//     }
// }
//    if(flag==0){
//     cout<<"prime"<<endl;
//    }
//    return 0;
// }

// reverse a given number
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int reverse;
// while(n>0){
// int lastDigit=n%10;

// reverse=reverse*10+lastDigit;
// n=n/10;
// }
// cout<<reverse<<endl;
// return 0;
// }

//armstrong number
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int sum=0;
// int original=n;
// while(n>0){
//     int lastDigit=n%10;
//     int cube=lastDigit*lastDigit*lastDigit;
//     sum+=cube;
// n=n/10;
// }
// cout<<sum<<endl;
// cout<<original<<endl;
// if(sum==original){
//     cout<<"it is an armstrong number";
// }
// else{
//     cout<<"it isn't an armstrong number";
// }
// cout<<endl;
// return 0;
// }

//0-1 pattern
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=0;i<=n;i++){
//     for(int j=0;j<=i;j++){
//         int check;
//         check=i+j;
//         if(check%2==0){
//             cout<<"1";
//         }
//         else{
//             cout<<"0";
//         }
//     }
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }



// inverted pattern
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }



//fibonacci numbers
// #include <iostream>
// using namespace std;
// void fibonacci(int n){
//     int t0=0;
//     int t1=1;
//     int nextTerm;
//     for(int i=0;i<n;i++){
//         cout<<t0<<endl;
//         nextTerm=t0+t1;
//         t0=t1;
//         t1=nextTerm;
//     }
//     return;
// }
// int main(){
// int n;
// cin>>n;
// fibonacci(n);
// cout<<endl;
// return 0;
// }


//factorial of a number
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;
//     }
    
//     return factorial;
// }
// int main(){
// int n;
// cin>>n;
// cout<<factorial(n);
// return 0;
// }


//ncr
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;
//     }
//     return factorial;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int ans=factorial(n)/(factorial(n-r)*factorial(r));
//     cout<<ans;
// }




//pascal triangle
// #include <iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;
//     }
//     return factorial;
// }
// int main(){
// int n;
// cin>>n;
// for(int i=0;i<=n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//     }
// cout<<endl;
// }
// return 0;
// }



//reverse an array

// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int max=INT_MIN;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<"reverse of array is"<<endl;
// for(int i=n-1;i>=0;i--){
//     cout<<arr[i]<<endl;
//     if(max<arr[i]){
//     max=arr[i];
// }

// }
// cout<<"max element is"<<max;
// cout<<endl;
// return 0;
// }



//lexicographically north south east west
// #include <iostream>
// using namespace std;
// int main(){
// int x=0,y=0;
// char ch;

// while(ch!='$'){
//     if(ch=='N'){
//         y++;
//     }
//     else if(ch=='S'){
//         y--;
//     }
//     else if(ch=='E'){
//         x++;
//     }
//     else if(ch=='W'){
//         x--;
//     }
//     cin>>ch;
// }
// while(x>0){
//     cout<<'E';
//     x--;
// }
// while(y<0){
//     cout<<'S';
//     y++;
// }
// while(x<0){
//     cout<<'W';
//     x++;
// }
// while(y>0){
//     cout<<'N';
//     y--;
// }

// return 0;
// }


//PYTHAGORIAN TRIPLET
// #include <iostream>
// using namespace std;
// bool checkTriplet(int x,int y,int z){
//     int a=max(x,max(y,z));
//     int b,c;
//     if(a==x){
//         b=y;
//         c=z;
//     }
//     else if(a==y){
//         b=x;
//         c=z;
//     }
//     else{
//         b=x;
//         c=y;
//     }
//     if(a*a==b*b+c*c){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
// int x,y,z;
// cin>>x>>y>>z;
// if(checkTriplet(x,y,z)){
//     cout<<"they are a pythagorian triplet";
// }
// else{
//     cout<<"no";
// }
// cout<<endl;
// return 0;
// }


//isduplicate
// #include <iostream>
// using namespace std;
// bool isDuplicate(int arr[], int n){
//     for (int i=0;i<n;i++){
//         for(int j=i+1;j<=n-1;j++){
//             if(arr[j]==arr[i]){
//                 return true;
//                 break;
//             }
//         }
//     }
//     return false;
// }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// if(isDuplicate(arr,n)){
//     cout<<"duplicate hai";
// }
// else{
//     cout<<"duplicate nhi hai";
// }
// cout<<endl;
// return 0;
// }



//isUnique
// #include <iostream>
// using namespace std;
// void isUnique(int arr[],int n){
  
//     for(int i=0;i<n;i++){
//           int flag=0;
//         for(int j=0;j<n;j++){
//            if(i!=j){
//             if(arr[j]==arr[i]){
//                 flag=1;
              
//             }
//         }
//     }
//     if(flag==0){
//         cout<<arr[i]<<" "<<"is unique ig"<<endl;
//     }
// }
// }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<=n;i++){
//     cin>>arr[i];
// }
// isUnique(arr,n);
// return 0;
// }


//binary search
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[],int size,int x,int low,int high){
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==x){
//             return mid;
//         }
//         if(arr[mid]<x){
// low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
// int arr[]={1,3,4,5,7};
// int size=sizeof(arr)/sizeof(arr[0]);
// int x;
// cin>>x;
// int result=binarySearch(arr,size,x,0,size-1);
// if(result==-1){
//     cout<<"element not found";
// }
// else{
//     cout<<"element found";
// }
// cout<<endl;
// return 0;
// }





//selection sort
// #include <iostream>
// using namespace std;
// void selectionSort(int arr[],int size){
//     for(int i=0;i<size;i++){
//             int min=arr[i];
//             int minIndex=i;
// for(int j=i;j<size;j++){
// if(arr[j]<min){
//     min=arr[j];
//     minIndex=j;
// }
//         }
//         int temp=arr[i];
//         arr[i]=arr[minIndex];
//         arr[minIndex]=temp;

//     }
// }
// int main(){
// int arr[]={5,4,3,1,2};
// int size=sizeof(arr)/sizeof(arr[0]);
// selectionSort(arr,size);
// for(int i=0;i<size;i++){
//     cout<<arr[i]<<endl;
// }
// cout<<endl;
// return 0;
// }





//bubble sort
// #include <iostream>
// using namespace std;
// void bubbleSort(int arr[],int n){
//     for(int j=0;j<n-1;j++){
//         for(int i=0;i<n-1;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//     }
// }
// int main(){
// int arr[]={5,4,3,1,2};
// int n=sizeof(arr)/sizeof(arr[0]);
// bubbleSort(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i];
// }
// cout<<endl;
// return 0;
// }


//insertionSort
// #include <iostream>
// using namespace std;
// void insertionSort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int current=arr[i];
//         int j;
//         for(j=i-1;j>=0;j--){
//             if(current<arr[j]){
//                 arr[j+1]=arr[j];
//             }
//             else{
// break;
// //is se hum apne j wale loop se bahar aa jayenge
//             }
//         }
//         arr[j+1]=current;
//     }
// }
// int main(){
// int n;
// cin>>n;
// int arr[100];
// for(int i=0;i<n;i++){
// cin>>arr[i];
// }
// insertionSort(arr,n);
// for(int i=0;i<n;i++){
// cout<<arr[i]<<endl;
// }
// cout<<endl; 
// return 0;
// }




//merge 2 sorted arrays
// #include <iostream>
// using namespace std;

// void mergeArrays(int arr1[],int arr2[],int n1,int n2,int arr3[]){
//     int i=0,j=0,k=0;
//     while(i<n1 && j<n2){
//         if(arr1[i]<arr2[j]){
//             arr3[k++]=arr1[i++];
//         }
//         else{
//             arr3[k++]=arr2[j++];
//         }

//     }
//     while(i<n1){
//         arr3[k++]=arr1[i++];

//     }
//      while(j<n2){
//         arr3[k++]=arr2[j++];
        
//     }
// }




// int main(){
// int arr1[]={1,3,5,7};
// int n1=sizeof(arr1)/sizeof(arr1[0]);
// int arr2[]={2,4,6,8};
// int n2=sizeof(arr2)/sizeof(arr2[0]);
// int arr3[n1+n2];
// mergeArrays(arr1,arr2,n1,n2,arr3);
// for(int i=0;i<n1+n2;i++){
//     cout<<arr3[i]<<endl;
// }
// cout<<endl;'
// return 0;
// }


//push zeroes to end
// #include <iostream>
// using namespace std;
// void pushZeroes(int arr[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[j],arr[i]);
//             j++;
//         }
//     }
// }
// int main(){
// int arr[] = {1,0, 3, 5, 0,7,0};
// 	int n = sizeof(arr) / sizeof(arr[0]);
// pushZeroes(arr,n);
// for(int i=0;i<n;i++){
// cout<<arr[i]<<endl;
// }

// return 0;
// }



//rotate the array
// #include <iostream>
// using namespace std;
// void rotateArray(int arr[],int size,int d){
//     int temp[size];
//     int k=0;
//     for(int i=d;i<size;i++){
//         temp[k]=arr[i];
//         k++;
//     }
//     for(int i=0;i<d;i++){
//         temp[k]=arr[i];
//         k++;
//     }
//     for(int i=0;i<size;i++){
//         arr[i]=temp[i];
//     }
// }
// int main(){
// int arr[]={1,2,3,4,5,6,7};
// int size=sizeof(arr)/sizeof(arr[0]);
// rotateArray(arr,size,3);
// for(int i=0;i<size;i++){
// cout<<arr[i]<<endl;
// }
// cout<<endl;
// return 0;
// }


//print second largest
// #include <iostream>
// using namespace std;
// void print2ndLargest(int arr[],int size){
//     if(size<2){
//         cout<<"bohot chota number hai ye";
//         return;
//     }
//     sort(arr,arr+size);
//     for(int i=size-2;i>=0;i--){
//         if(arr[i]!=arr[size-1]){
//             cout<<"second largest element is"<<arr[i]<<endl;
//             break;
//         }
//     }
// }
// int main(){
// int arr[]={12,35,1,10,34,1};
// int size=sizeof(arr)/sizeof(arr[0]);
// print2ndLargest(arr,size);
// cout<<endl;
// return 0;
// }



//arrange numbers in array
// #include <iostream>
// using namespace std;
// void arrangeNumbers(int arr[],int n){
//     int dir=0;
//     int i=0,j=n-1;
//     int count=1;
//     while(i<=j){
//         if(dir==0){
//             arr[i]=count;
//             dir=1;
//             i++;
//         }
//         else{
//             dir=0;
//             arr[j]=count;
//             j--;
//         }
//         count++;
//     }
// }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// arrangeNumbers(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// return 0;
// }


// inverted half pyramid
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;

// for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<" "<<endl;
// }
// return 0;
// }


//half pyramid 180degree

// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         if(j<=n-i){
//         cout<<" ";
//         }
//         else{
//             cout<<"*";
//         }

//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }


//half pyramid
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int count=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<count;
//         count++;
//     }
   
//         cout<<" "<<endl;
    
// }
// cout<<endl;
// return 0;
// }


//butterfly
// i =same ,columns=2n-2i
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     int spaces=2*n-2*i;
//     for(int j=1;j<=spaces;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=n;i>=0;i--){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     int spaces=2*n-2*i;
//     for(int j=1;j<=spaces;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }






//inverted pattern
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=n;i>=0;i--){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<" "<<endl;
// }
// cout<<endl;
// return 0;
// }




//  0-1 pattern
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0){
//         cout<<"1";
//         }
//         else{
//             cout<<"0";
//         }
//     }
//     cout<<" "<<endl;
// }

// return 0;
// }



//rhombus pattern
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=n;j++){
//    cout<<"*";
//     }
//     cout<<endl;
// }

// return 0;
// }



// number pattern
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//     cout<<endl;
// }


// }

//palindromic pattern

// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     int j;
//     for(j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     int k=i;
//     for(;j<=n;j++){
//         cout<<k--<<" ";
//     }
//     for(;j<=n+i-1;j++){
//         cout<<k++<<" ";
//     }
//     cout<<endl;
// }

// return 0;
// }




//largest element of an array
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
// cin>>arr[i];
// }
// int max=INT_MIN;
// for(int i=0;i<n;i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }

// }
// cout<<max<<endl;
// return 0;
// }





//triplet sum
// #include <iostream>
// using namespace std;
// void tripletSum(int arr[],int n,int x){
//     sort(arr,arr+n);
//       for(int i=0;i<n-1;i++){
//     int y=x-arr[i];
//     int low=i+1;
//     int high=n-1;
//     while(low<high){
//         if(arr[low]+arr[high]==y){
//             cout<<"triplet pair are"<<arr[i]<<arr[low]<<arr[high];
//             high--;
//             low++;
//         }
//         else if(arr[low]+arr[high]>y){
//             high--;
//         }
//         else{
//             low++;
//         }
//     }
// }
// }
// int main(){
// int n;
// cin>>n;
// int x;
// cin>>x;
// int arr[n];
// for(int i=0;i<n;i++){
// cin>>arr[i];
// }
// tripletSum(arr,n,x);
// cout<<endl;
// return 0;
// }



//inverted pattern
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int j=1;j<=n;j++){
//     for(int i=1;i<=n;i++){
//         if(i>=j){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";.
//         }
        
//     }
//     cout<<endl;
// }
// cout<<endl;
// return 0;
// }


