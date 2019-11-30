#include <iostream>
using namespace std;
int main(){
	int pilihan;
	int alas;
	int tinggi; 
	int panjang; 
	int lebar;
	int luas_persegi;
	int luas_segitiga;
	const float hitung_luas_segitiga =0.5 *alas * tinggi;
	const float hitung_luas_persegi =panjang * lebar;
	
	cout<<" 1. luas persegi\n";
	cout<<"2. luas segitiga\n";
	cin>>pilihan;
	switch(pilihan){
		case 1:
			cout<<"masukkan panjang";
			cin>>panjang;
			cout<<"masukkan lebar";
			cin>>lebar;
			cout<<"masukkan luas persegi "<<panjang*lebar<<"cm2";
			cin>>luas_persegi;
		break;
		case 2:
			cout<<"masukkan alas";
			cin>>alas;
			cout<<"masukkan tinggi";
			cin>>tinggi;
			cout<<"masukkan luas segitiga "<< 0.5 *alas*tinggi<<"cm2";
			cin>>luas_segitiga;
		break;
		
	default:
	cout<<"input salah";
	}
}
