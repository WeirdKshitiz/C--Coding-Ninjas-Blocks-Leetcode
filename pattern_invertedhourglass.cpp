#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	// for(int i=0;i<n;i++){
	// 	int k=n;
	// 	for(int j=0;j<=i;j++){
	// 		cout<<k<<" ";
	// 		k--;
	// 	}
	// 	for(int j=1;j<2*(n-i);j++){
	// 		cout<<"  ";
	// 	}

	//      k=n-i;
	// 	for(int j=0;j<=i;j++){
	// 		cout<<k<<" ";
	// 		k++;
	// 	}

	// cout<<endl;
	// }

//5421012345
	// for(int i=1;i<=1;i++){
	// 	int k=n;
	// 	for(int j=0;j<=n;j++){
	// 		cout<<k<<" ";
	// 		k--;
	// 	}
	// 	k=1;
	// 	for(int j=0;j<n;j++){
	// 		cout<<k<<" ";
	// 		k++;
	// 	}
	// 	cout<<endl;
	// }


	
	for(int i=1;i<=n;i++){
		int k=n;
		for(int j=1;j<=n-i+1;j++){
			cout<<k<<" ";
			k--;
		}
		for(int j=1;j<=2*i-1;j++){
			cout<<"  ";
		}
		k=i;
			for(int j=1;j<=n-i+1;j++){
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}
	for(int i=n;i<=1;i--){
		int k=n;
		for(int j=1;j<=n-i+1;j++){
			cout<<k<<" ";
			k--;
		}
		for(int j=1;j<=2*i-1;j++){
			cout<<"  ";
		}
		k=i;
			for(int j=1;j<=n-i+1;j++){
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}


    
	return 0;
}
