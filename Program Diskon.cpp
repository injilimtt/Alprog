#include <iostream>
using namespace std;
int main (){
	
	int item;	
	int uang;
	int harga_kaos = 150000;
	int harga_celana= 250000;
	int harga_jacket = 350000;
	int harga_sepatu = 650000;
	int harga_topi = 50000;
	
	cout<<"Program Diskon \n";
	cout<<"\n1. Kaos \n"<<"2. Celana \n"<<"3. Jacket \n"<<"4. Sepatu \n"<<"5. Topi \n";
	cin>>item;
	
	switch(item){
		case 1 :
			cout<<"kaos = "<<harga_kaos;
			cout<<"\n mendapatkan potongan harga 30% \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-(harga_kaos * 30/100);
			break;	
		case 2 :
			cout<<"celana = "<<harga_celana;
			cout<<"\n masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_celana;
			break;	
		case 3 :
			cout<<"jacket = "<<harga_jacket;
			cout<<"\n mendapatkan diskon 45% \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_jacket * 45/100;
			break;
		case 4 :
			cout<<"sepatu = "<<harga_sepatu;
			cout<<"\n mendapatkan diskon 60% \n";
			cout<<" \n masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_sepatu * 60/100;
			break;
		case 5 :
			cout<<"sepatu = "<<harga_sepatu;
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_sepatu;
			break;
		default :
			cout<<"pilihan item salah";
				
	}
}

