// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n]={0};
// a[2]=1;
// for(int i=3;i<=n;i+=2){
//     a[i]=1;
// }
// // one way
// for(int i=3;i<=sqrt(n);i+=2){
//     for(int j=i*3;j<=n;j+=i*2){
//         a[j]=0;
//     }
// }
//other way                           choose any one of them
// for(int i=3;i<=sqrt(n);i+=2){
//     for(int j=i*i;j<=n;j+=i*2){
//         arr[j]=0;
//     }
// }
//another way
//we dont have to check the multiples if we have already checked via multiples of some other number
// for(int i=3;i<=sqrt(n);i+=2){
//     while(a[i]==1){
//     for(int j=i*i;j<=n;j+=i*2){
//         a[j]=0;
//     }
//     }
// }
// for(int i=0;i<=n;i++){
//     if(a[i]!=0){
//         cout<<i<<" ";
//     }
// }
// cout<<endl;
// return 0;
// }














//GAGAN LAPTOP CODE
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[10000] = {0};
    a[2] = 1;
    for (int i = 3; i <= n; i += 2)
    {
        a[i] = 1;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        if (a[i] == 1)
        {
            for (int j = i * i; j <= n; j += i * 2)
            {
                a[j] = 0;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (a[i] != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}