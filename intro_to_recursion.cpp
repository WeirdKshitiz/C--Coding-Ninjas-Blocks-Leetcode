// #include <iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     int smallOutput=factorial(n-1);
//     int output=n*smallOutput;
//     return output;
// }
// int main(){
// int n;
// cin>>n;
// cout<<factorial(4)<<endl;
// return 0;
// }


// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
// #include <iostream>
// #include <cmath>

// using namespace std;

// int power(int x,int n){
//      if(n==0){
//         return 1;
//     }
//     if(x==0){
//         return 0;
//     }
//    return x*power(x,n-1);
// }
// int main(){
// // int n,x;
// // cin>>n>>x;

//  int x = 2;
//     int n = 3;
// cout<<power(x,n)<<endl;
// return 0;
// }











// Given is the code to print numbers from 1 to n in increasing order recursively. But it contains few bugs that you need to rectify such that all the test cases pass.
// #include<iostream>
// using namespace std;
// void print(int n){
   
//     static int i=1;
//     if(n == 1){
//         cout << i << " ";
//         return;
//     }

//     cout << i << " ";
//         i++;
//     print(n - 1);
//     //}
// }

// int main(){
//     int n;
//     cin >> n;
  
//     print(n);
// }











// Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
// 




//nth fibonacci number
// #include <iostream>
// using namespace std;
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int smallOutput1=fib(n-1);
//     int smallOutput2=fib(n-2);
//     return smallOutput1+smallOutput2;
// }
// int main(){
// cout<<fib(3)<<endl;
// cout<<endl;
// return 0;
// }




//check if array is sorted
// #include <iostream>
// using namespace std;
// bool is_sorted2(int a[],int size){
//     if(size==0||size==1){
//         return true;
//     }
//     bool isSmallerOutput=is_sorted2(a+1,size-1);
//     if(!isSmallerOutput){
//         return false;
//     }
//     if(a[0]>a[1]){
//         return false;
//     }
//     else{
//         return true;
//     }
// }
// bool is_sorted(int a[],int size){
//     if(size==0|| size==1){
//         return true;
//     }
//     if(a[0]>a[1]){
//         return false;
//     }
//     bool isSmallerSorted=is_sorted(a+1,size-1);
//    return isSmallerSorted;
// }
// int main(){

// cout<<endl;
// return 0;
// }









//find sum of array using recursion
// #include <stdio.h>
 
// // Return sum of elements in A[0..N-1]
// // using recursion.
// int findSum(int A[], int N)
// {
//     if (N <= 0)
//         return 0;
//     return (findSum(A, N - 1) + A[N - 1]);
// }
 
// // Driver code
// int main()
// {
//     int A[] = { 1, 2, 3, 4, 5 };
//     int N = sizeof(A) / sizeof(A[0]);
//     printf("%d", findSum(A, N));
//     return 0;
// }




/*
* Approach : The idea is to compare x with the last element
* in arr[]. If the element is found at the last position,
* return it. Else recur searchElement() for remaining array and
* element x.
*/







// Q.RECURSIVELY SEARCH FOR A NUMBER
// #include <iostream>

// using namespace std;

// // Recursive function to search for x in arr[]
// int searchElement(int arr[], int size, int x) {
	
// 	size--;
	
// 	// Base case (Element not present in the array)
// 	if (size < 0) {
// 		return -1;
// 	}
// 	// Base case (Element found, return its position)
// 	if (arr[size] == x) {
// 		return size;
// 	}

// 	// Recursive case
// 	return searchElement(arr, size, x);

// }


// // Driver code
// int main() {
// 	int arr[] = {17, 15, 11, 8, 13, 19};
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	int x = 11;
// 	int idx = searchElement(arr, size, x);
// 	if (idx != -1)
// 		cout << "Element " << x << " is present at index " <<idx;
// 	else
// 		cout << "Element " << x << " is not present in the array";
// 	return 0;
// }






//FIRST INDEX OF A NUMBER

// #include <iostream>

// using namespace std;

// int firstIndex(int input[], int size, int x, int currIndex){
//     if(size==currIndex){
//         return -1;
//     }

//     if(input[currIndex] == x){
//         return currIndex;
//     }

//     return firstIndex(input,size,x,currIndex+1);
    
// }

// int main(){
//     int input[] = {9,8,10,8};
//     int x = 8;
//     int size = 4;

//     cout<<firstIndex(input,size,x,0);

//     return 0;
// }






// Q.last index
// // C++ program for the above approach
// #include <iostream>
// using namespace std;

// // Recursive function to find the last
// // index of the given number K
// int findIndex(int arr[], int idx, int K)
// {

// 	// Base Case
// 	if (idx < 0)
// 		return -1;

// 	// Return Statement
// 	if (arr[idx] == K) {
// 		return idx;
// 	}

// 	// Recursive Call
// 	return findIndex(arr, idx - 1, K);
// }

// // Driver Code
// int main()
// {

// 	int arr[] = { 3, 1, 4, 4, 2, 3, 1 };
// 	int N = sizeof(arr) / sizeof(arr[0]);
// 	int K = 4;

// 	// Function call
// 	cout << findIndex(arr, N - 1, K);

// 	return 0;
// }









// Q.FIND ALL INDEXES OF A GIVEN NUMBER

// CPP program to find all indices of a number
// #include <iostream>
// using namespace std;

// // A recursive function to find all
// // indices of a number
// int AllIndexesRecursive(int input[], int size,
// 					int x, int output[])
// {
	
// 	// If an empty array comes
// 	// to the function, then
// 	// return zero
// 	if (size == 0) {
// 		return 0;
// 	}

// 	// Getting the recursive answer
// 	int smallAns = AllIndexesRecursive(input + 1,
// 									size - 1, x, output);

// 	// If the element at index 0 is equal
// 	// to x then add 1 to the array values
// 	// and shift them right by 1 step
// 	if (input[0] == x) {
// 		for (int i = smallAns - 1; i >= 0; i--) {
// 			output[i + 1] = output[i] + 1;
// 		}

// 		// Put the start index in front
// 		// of the array
// 		output[0] = 0;
// 		smallAns++;
// 	}
// 	else {
		
// 		// If the element at index 0 is not equal
// 		// to x then add 1 to the array values
// 		for (int i = smallAns - 1; i >= 0; i--) {
// 			output[i] = output[i] + 1;
// 		}
// 	}
// 	return smallAns;
// }

// // Function to find all indices of a number
// void AllIndexes(int input[], int n, int x)
// {
// 	int output[n];
// 	int size = AllIndexesRecursive(input, n,
// 								x, output);
// 	for (int i = 0; i < size; i++) {
// 		cout << output[i] << " ";
// 	}
// }

// // Driver Code
// int main()
// {
// 	int arr[] = { 1, 2, 3, 2, 2, 5 }, x = 2;
	
// 	int n = sizeof(arr) / sizeof(arr[0]);
	
// 	// Function call
// 	AllIndexes(arr, n, x);
	
// 	return 0;
// }
