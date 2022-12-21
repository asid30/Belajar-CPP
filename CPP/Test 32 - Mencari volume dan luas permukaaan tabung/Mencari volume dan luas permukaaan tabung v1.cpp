#include <iostream>
using namespace std;

double Volume (int r, int tinggi){
	return r*r*3.14*tinggi;
}

double LuasPermukaan (int r, int tinggi){
	return 2*3.14*r*(tinggi+r);
}


int main(){
	int r,tinggi,hasil;
	char select[2];
	
	cout<<"PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN TABUNG\n\n";
	
	cout<<"Pilih Menu:\n1. Volume\n2. Luas Permukaan\nJawab = ";
	cin>>select[0];
	cout<<endl;
	switch (select[0]){
		case '1':
			do{
				cout<<"-----------------------------------------------------------------\n";
				cout<<"Masukan jari-jari alas tabung = ";cin>>r;
				cout<<"Masukan tinggi tabung = ";cin>>tinggi;
				cout<<endl;
				
				cout<<"Volume tabung = "<<Volume(r,tinggi)<<endl;
				
				cout<<"Apakah anda ingin mengulang menghitung volume? (y/n)";cin>>select[1];
				cout<<endl;
				
				if(select[1]=='n'){
					break;
				}
				}while(true);
		
		break;
		
		case '2':
			do{
				cout<<"-----------------------------------------------------------------\n";
				cout<<"Masukan jari-jari alas tabung = ";cin>>r;
				cout<<"Masukan tinggi tabung = ";cin>>tinggi;
				cout<<endl;
				
				cout<<"Luas Permukaan tabung = "<<LuasPermukaan(r,tinggi)<<endl;
				
				cout<<"Apakah anda ingin mengulang menghitung luas permukaan? (y/n)";cin>>select[1];
				cout<<endl;
				
				if(select[1]=='n'){
					break;
				}
				}while(true);
		break;
	}
}
