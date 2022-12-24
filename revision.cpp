#include <iostream>
using namespace std;
// int main(){
// int rows,columns;
// cin>>rows>>columns;
// for(int i=1;i<=rows;i++){
//     for(int j=1;j<=columns;j++){
//         if(i==1 || i==rows){
//             cout<<"*";
//         }
//         else if(j==1 || j==columns){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }

int main(){
    int n;
    cin>>n;

 for(int i=1;i<=n;i++){
    int j;
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    int k=i;
    for(;j<=n;j++){
        cout<<"*";
    }
    // for( j=1;j<=i;j++){
    //     cout<<"*";
    // }
    cout<<" "<<endl;
 }

}
