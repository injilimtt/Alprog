#include <iostream>
using namespace std;
int main (){
	unsigned long long int count=1, jumlah_faktorial;

		cout<<" masukkan  jumlah bilangan faktorial  : ";
		cin>>jumlah_faktorial;
		
		for(unsigned long long int i=jumlah_faktorial;i>=1; i--){
			count=count*i;
			
			if (i==1){
				cout<<i;
			}else {
				cout<<i<<" * ";
				
			}
		}
		cout<<" = "<<count;	
			
	
	}
