#include <iostream>
#include <stdlib.h>
using namespace std;

char select;

double Volume (double r, double tinggi){
	return r*r*3.14*tinggi;
}

double LuasPermukaan (double r, double tinggi){
	return 2*3.14*r*(tinggi+r);
}

int menu(){
	string Menu[4]={"Pilih Menu : ",
					"1. Volume",
					"2. Luas Permukaan",
					"3. Quit"};
	
	cout<<"\tPROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN TABUNG\n\n";
	
	for(int i = 0; i < 4; i++)
		cout << Menu[i] << endl;
	cin>>select;

	return select;
}

void utama(char select){
	int r,tinggi,hasil;
	switch (select){
			case '1':
				do{
				cout<<"-----------------------------------------------------------------\n";
				cout<<"Masukan jari-jari alas tabung = ";cin>>r;
				cout<<"Masukan tinggi tabung = ";cin>>tinggi;
				cout<<endl;
				
				cout<<"Volume tabung = "<< Volume(r,tinggi) <<endl;					
				cout<<"Apakah anda ingin mengulang menghitung volume? (y/n)";cin>>select;
				cout<<endl;
				
				}while(select=='y');
				break;
			
			case '2':
				do{
				cout<<"-----------------------------------------------------------------\n";
				cout<<"Masukan jari-jari alas tabung = ";cin>>r;
				cout<<"Masukan tinggi tabung = ";cin>>tinggi;
				cout<<endl;
					
				cout<<"Luas Permukaan tabung = "<<LuasPermukaan(r,tinggi)<<endl;
					
				cout<<"Apakah anda ingin mengulang menghitung luas permukaan? (y/n)";cin>>select;
				cout<<endl;
					
				}while(select=='y');
				break;
				
			case '3':
				break;
		}
}

int main(){
	select = menu();
	utama(select);
	
	return 0;
}
