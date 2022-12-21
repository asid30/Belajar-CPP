#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main(){
	
	string w,x;
	float y,z;
	
	maha mahasiswa;
	
	cout<<"Nama : ";getline(cin,w);
	mahasiswa.setNama(w);
	cout<<"NPM : ";cin>>x;
	mahasiswa.setNpm(x);
	cout<<"Nilai UTS : ";cin>>y;
	mahasiswa.setUts(y);
	cout<<"Nilai UAS : ";cin>>z;
	mahasiswa.setUas(z);

	system("CLS");
	
	cout<<"Nama : "<<mahasiswa.getNama()<<endl;
	cout<<"NPM : "<<mahasiswa.getNpm()<<endl;
	cout<<"Nilai Akhir : "<<mahasiswa.cari_nilai()<<endl;
	cout<<"Huruf Mutu : "<<mahasiswa.cetak_mutu()<<endl;
}
