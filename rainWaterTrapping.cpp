//comment out the lines to unerstanbd more properly
#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
           cin>>a[i];
        int l[n];
        l[0]=a[0];
        for(int i=1;i<n;i++)
           l[i]=max(l[i-1],a[i]);
    
    //  for(int i=1;i<n;i++)
    //       cout<<"values inside l[i] "<<l[i]<<" " <<endl;

        int r[n];
   
        r[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
           r[i]=max(r[i+1],a[i]);
    
// for(int i=n-2;i>=0;i--)
//      cout<<"values inside r[i] "<<r[i]<<" " <<endl;


        int ans =0;
        for(int i=0;i<n;i++)
           ans +=(min(l[i],r[i])-a[i]);
    

        cout << ans << endl;
    }
    
}