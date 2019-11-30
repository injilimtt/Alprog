#include <iostream>
using namespace std;

int main(){
	int nilai []={9,4,3,4,6,2}; 
	int i;
	int jumlah;
	int penjumlahan = sizeof(nilai) + sizeof(int);
	int perkalian = sizeof(nilai) * sizeof(int);
	
	for (i=0; i< jumlah; i++)
		cout<<nilai[i]<<endl;
		
	cout<<"Hasil jumlahan = "<<penjumlahan<<endl;
	cout<<"Hasil kalian = "<<perkalian<<endl;
		
		return 0;
		
	
}
