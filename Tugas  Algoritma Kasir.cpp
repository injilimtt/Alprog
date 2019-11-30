#include <iostream>
using namespace std;

	int main(){
	int barang;
	int uang;
	int jumlah_barang;
	int harga_floridina = 5000;
	int harga_zwitsal = 10000;
	int harga_cadbury = 25000;
	int harga_susu_hilo = 20000;
	int harga_chitato = 10000;

	cout<<"Program Kasir \n";
	cout<<"\n daftar barang \n"<<"1. floridina "<<harga_floridina;
	cout<<"\n 2. zwitsal "<<harga_zwitsal;
	cout<<"\n 3. cadbury "<<harga_cadbury;
	cout<<"\n 4. susu hilo "<<harga_susu_hilo;
	cout<<"\n 5. chitato "<<harga_chitato<<"\n";
	cin>>barang;
	
	switch(barang){
		case 1:
			cout<<"floridina = "<<harga_floridina;
			cout<<"\n jumlah barang yang akan diambil =";
			cin>>jumlah_barang;
			cout<<"\n harga yang harus dibayar ="<<harga_floridina*jumlah_barang;
			cout<<"\n tunai =";
			cin>>uang;
			cout<<"kembalian ="<<uang-(harga_floridina*jumlah_barang);
			break;
		case 2:
			cout<<"zwitsal = "<<harga_zwitsal;
			cout<<"\n jumlah barang yang akan diambil";
			cin>>jumlah_barang;
			cout<<"\n harga yang harus dibayar "<<harga_zwitsal*jumlah_barang;
			cout<<"\n tunai =";
			cin>>uang;
			cout<<"kembalian ="<<uang-(harga_zwitsal*jumlah_barang);
			break;
		case 3:
			cout<<"susu cadbury = "<<harga_cadbury;
			cout<<"jumlah barang yang akan diambil =";
			cin>>jumlah_barang;
			cout<<"\n harga yang harus dibayar ="<<harga_cadbury*jumlah_barang;
			cout<<"\n tunai =";
			cin>>uang;
			cout<<"kembalian ="<<uang-(harga_cadbury*jumlah_barang);
			break;
		case 4:
			cout<<" susu hilo = "<<harga_susu_hilo;
			cout<<"jumlah barang yang akan diambil =";
			cin>>jumlah_barang;
			cout<<"\n harga yang harus dibayar ="<<harga_susu_hilo*jumlah_barang;
			cout<<"\n tunai =";
			cin>>uang;
			cout<<"kembalian ="<<uang-(harga_susu_hilo*jumlah_barang);
			break;
		case 5:
			cout<<"chitato = "<<harga_chitato;
			cout<<"\n jumlah barang yang akan diambil";
			cin>>jumlah_barang;
			cout<<"\n harga yang harus dibayar "<<harga_chitato*jumlah_barang;
			cout<<"\n tunai =";
			cin>>uang;
			cout<<"kembalian ="<<uang-(harga_chitato*jumlah_barang);
			break;
		default:
			cout<<"stok habis";
	}

}
	
	
			
	
