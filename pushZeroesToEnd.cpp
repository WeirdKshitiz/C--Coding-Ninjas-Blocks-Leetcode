#include <iostream>
using namespace std;
void pushZeroes(int A[],int n){
    int j=0; //for temp array
        for(int i=0;i<n;i++){
            if(A[i]!=0){
               swap(A[j],A[i]);
              j++;
            }
        }
    }

int main(){
int A[]={ 5, 6, 0, 4, 6, 0, 9, 0, 8 };
int n = sizeof(A) / sizeof(A[0]);
pushZeroes(A,n);
for(int i=0;i<n;i++){
    cout<<A[i]<<endl;
}
cout<<endl;
return 0;
}

// C++ Program to move all zeros to the end

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int A[] = { 5, 6, 0, 4, 6, 0, 9, 0, 8 };
// 	int n = sizeof(A) / sizeof(A[0]);
// 	int j = 0;
// 	for (int i = 0; i < n; i++) {
// 		if (A[i] != 0) {
// 			swap(A[j], A[i]); // Partitioning the array
// 			j++;
// 		}
// 	}
// 	for (int i = 0; i < n; i++) {
// 		cout << A[i] << " "; // Print the array
// 	}

// 	return 0;
// }
