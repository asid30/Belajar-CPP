#include <iostream>
#include <stdlib.h>
using namespace std;

char select;

double Volume (int r, int tinggi){
	return r*r*3.14*tinggi;
}

double LuasPermukaan (int r, int tinggi){
	return 2*3.14*r*(tinggi+r);
}

int menu(){
	string Menu[4]={"Pilih Menu : ",
					"1. Volume",
					"2. Luas Permukaan",
					"3. Quit"};
					
	cout<<"-----------------------------------------------------------------\n";
	cout<<"\tPROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN TABUNG\n\n";
	
	for(int i = 0; i < 4; i++)
		cout << Menu[i] << endl;
	cin>>select;

	return select;
}

double utama(char select){
	int r,tinggi;
	char p;
	if(select == '1'){
		cout<<"-----------------------------------------------------------------\n";
		cout<<"Masukan jari-jari alas tabung = ";cin>>r;
		cout<<"Masukan tinggi tabung = ";cin>>tinggi;
		cout<<endl;
			
		cout<<"Volume tabung = "<< Volume(r,tinggi) <<endl;								
		cout<<"Apakah anda ingin kembali ke menu? (y/n)";cin>>select;
		cout<<endl;
		return select;
	}else if(select == '2'){
		cout<<"-----------------------------------------------------------------\n";
		cout<<"Masukan jari-jari alas tabung = ";cin>>r;
		cout<<"Masukan tinggi tabung = ";cin>>tinggi;
		cout<<endl;
					
		cout<<"Luas Permukaan tabung = "<<LuasPermukaan(r,tinggi)<<endl;
					
		cout<<"Apakah anda ingin kembali ke menu? (y/n)";cin>>select;
		cout<<endl;
		return select;
	}else if(select == '3'){
		return select;
	}
}

void Menu1(){
	while(select !='n'){
		select = menu();
		if(select == '3')
			break;
		select = utama(select);
	}
}

int main(){
	Menu1();
	return 0;
}
