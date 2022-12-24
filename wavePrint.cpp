//outer loop: columns
//inner loop : rows
//agar column ki value even hai to humein top to bottom jana hai
//agar column ki value odd hai to humein bottom to top jana hai



#include <iostream>
#include <string>
using namespace std;
int main(){
//     n is column
// m is row
    int m,n;
    cin>>m>>n;
    int a[m][n];
  //input of array
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
    cin>>a[i][j];
}
}
for(int i=0;i<n;i++){
    if(i%2==0){
        for(int j=0;j<m;j++){
            cout<<a[j][i]<<" ";
        }
    }
    else{
        for(int j=m-1;j>=0;j--){
            cout<<a[j][i]<<" ";
        }
    }
}
    return 0;
}





// #include <iostream>
// using namespace std;
// int main(){
    
// int m,n;
// cin>>m;
// cin>>n;
// int a[m][n];
// //m is rows 
// //n is columns
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
// cin>>a[i][j];
//     }
// }


// for(int j=0;j<n;j++){
//     if(j%2==0){
//         for(int i=0;i<m;i++){
//             cout<<a[i][j]<<" ";
//         }
//     }
//     else{
//         for(int i=m-1;i>=0;i--){
//             cout<<a[i][j]<<" ";
//         }
//     }
// }

// return 0;
// }