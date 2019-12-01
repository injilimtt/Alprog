#include <iostream>
#include <cmath>
using namespace std;  
float volume_balok (int p, int l, int t){
	int balok= p*l*t;
	return balok;
}
float volume_kubus (int sisi){
	int kubus=pow(sisi,3);
	return kubus;
}
float volume_kerucut (int r, int tinggi, float phi){
	float kerucut= 0.3 * pow(r,2) * phi *tinggi;
	return kerucut;

}
int main (){
	int p,l,t, balok;
	
	cout<<"  MENGHITUNG VOLUME BALOK \n";
	cout<<"Masukkan Panjang : ";cin>>p;
	cout<<"Masukkan Lebar : ";cin>>l;
	cout<<"Masukkan Tinggi : ";cin>>t;
	balok=volume_balok (p, l, t);
	cout<<"Volume Persegi = "<<balok<<endl;
	
	int sisi, kubus;
	cout<<"\n  MENGHITUNG VOLUME KUBUS \n";
	cout<<"Masukkan Panjang Sisi : ";cin>>sisi;
	kubus=volume_kubus (sisi);
	cout<<"Volume Kubus = "<<kubus<<endl;


	int r,tinggi;
	float phi, kerucut;
	cout<<"\n  MENGHITUNG VOLUME KERUCUT \n";
	cout<<"Masukkan Jari-jari : ";cin>>r;
	cout<<"Masukkan Tinggi : "; cin>>tinggi;
	phi=3.14;
	kerucut=volume_kerucut (r,t,phi);
	cout<<"Volume Kubus = "<<kerucut<<endl;
		
}

