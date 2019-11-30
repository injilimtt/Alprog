#include <iostream>
using namespace std;
int main(){
	int umur;
	cout<<"masukkan umur";
	cin>>umur;
	
	if (umur<=1){
		cout<<"bayi";
	}else if (umur>1 and umur<=3){
		cout<<"batita";
	}else if (umur>3 and umur<=5){
		cout<<"balita";
	}else if (umur>5 and umur<=12){
		cout<<"anak anak";
	}else if (umur>12 and umur<= 17){
		cout<<"remaja";
	}else if (umur>17 and umur<=30){
		cout<<"pemuda";
	}else if (umur>30 and umur<=60){
		cout<<"dewasa";
}else {
	cout<<"lansia";
}
	
}

	

