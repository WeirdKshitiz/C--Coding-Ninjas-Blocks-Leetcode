#include <iostream>
using namespace std;
int main(){
   //m=rows,n=cols
    int m,n;
cin>>m>>n;
int** p=new int*[m];
for(int i=0;i<m;i++){
    //har row ke andar maine 20 column add krdiye
    p[i]=new int[n];
    for(int j=0;j<n;j++){
        //jo maine upar row bnayi hai uspe bhi input le leta hun
        cin>>p[i][j];
    }

}





//deletion
for(int i=0;i<m;i++){
    delete[] p[i]; //pehle saari rows ko dleete kr diya
}
delete[] p; //fir apne integer* vale array ko delete kr diya
cout<<endl;
return 0;
}