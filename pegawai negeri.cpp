#include <iostream>
using namespace std;

int main () {
	int TIU;
	int TWK;
	int TKP;
	int total_nilai ;
	cout<<"Masukkan Nilai TIU : ";
	cin>> TIU;
	
	cout<<"Masukkan Nilai TWK : ";
	cin>>TWK;
	
	cout<<"Masukkan Nilai TKP : ";
	cin>>TKP;
	
	cout<<"Total Nilai = "<<TIU+TWK+TKP;
	
	if(TIU >=80, TWK >=100, TKP >=140, 
	total_nilai >=320 ){
		cout<<"\n"<<"Lulus CPNS" ;
	}else (total_nilai <320);{
		cout<<"\n Tidak Lulus CPNS \n";
	}
}
