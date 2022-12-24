#include <iostream>
using namespace std;
int chocklet(int x,int y){
    if(x==y){
        return x+y;
    }
    if(x<y){
      return chocklet(x,y-x);
    }
    else{
       return chocklet(x-y,y);
    }
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
       cout<<chocklet(x,y)<<"\n";
    }
	// your code goes here
	return 0;
}













// Denoting Meliodas as 
// M
// M, Ban as 
// B
// B.
// Testcase 1:
// M
// M=5, 
// B
// B=3
// Ban eates 3 chocolates of Meliodas.
// M
// M=2, 
// B
// B=3
// Meliodas eats 2 chocolates of Ban.
// M
// M=2, 
// B
// B=1
// Ban eates 1 chocolate of Meliodas.
// M
// M=1, 
// B
// B=1
// Since they have the same no of candies, they stop quarreling.
// Total candies left: 2

// Testcase 2:
// M
// M=10, 
// B
// B=10
// Since both of them had the same candies to begin with, there was no point in fighting.
// Total candies left: 20

// Testcase 3:
// M
// M=4, 
// B
// B=8
// Meliodas eats 4 chocolates of Ban.
// M
// M=4, 
// B
// B=4
// Since they have the same no of candies, they stop quarreling.
// Total candies left: 8