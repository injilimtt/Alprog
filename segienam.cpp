#include <iostream>
using namespace std;
int main (){
	int n;
	
	cout<<"Panjang Pola : ";
	cin>>n;

	
	for (int i=0; i <= n; i++){
		for (int j=n; j > i; j--){
			cout<<" ";
		}
		for (int k=n ; k < 2* (i+n); k++) {
			cout<<"*";
		}
		cout<<endl;
}
	for(int i=1; i<=n ;i++){
		for (int j=0; j<i; j++){
			cout<<" ";
	}
		for (int k=n; k > (2*(i-n)); k--){
			cout << "*";
		}
		cout<<endl;
}
}

