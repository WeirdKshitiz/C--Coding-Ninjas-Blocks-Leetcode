#include<iostream>
#include<array>
using namespace std;
int main() {
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;

        x = x%n;
        int temp[n];
        for(int i=0;i<n;i++){
            temp[i] = v[i];
        }

        
        for(int i=0;i<n;i++){
            //    cout<<"value of temp before "<<temp[i]<<endl;
            temp[i] = v[i] + v[(i-x+n)%n];
            // cout<<"value of i,x,n"<<" "<<i<<" "<<x<<" "<<n<<" "<<endl;
            // cout<<"value of temp after"<<temp[i]<<endl;
        }

        for(int i=0;i<n;i++){
            v[i] = temp[i];
        }
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += v[i];
    }
    cout<<sum<<endl;
}
