#include <iostream>
using namespace std;
int main (){
	int p=5;
	int l=3;
	int t=10;
	int volume=p*l*t;
	
	if(volume<=100){
		cout<<"Balok Kecil \n";
		
	}else if(volume>100 && volume<=200){
		cout<<"Balok Sedang \n";
		
	
	}else{
		cout<<"Balok Besar \n";}
	cout<<volume<<"cm3";	
	
}
