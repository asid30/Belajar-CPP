#include <iostream>
using namespace std;
int main(){
	//Header
	cout<<"Pre-Test \"Study kasus pembuatan program data pinjaman bank\""<<endl;
	//Opening
	cout<<"Formulir pinjaman tunai nasabah Bank Rimba\n--------------------------------\nSilahkan isi data berikut!"<<endl<<endl;
	//String
	string a;
	string b;
	string c;
	string d;
	/*
	Keterangan
	a=Nama
	b=Jumlah pinjaman
	c=Lama durasi
	d=Suku bunga per-tahun
	*/
	//Input
	cout<<"Masukan nama anda: ";
	getline(cin,a);
	cout<<"Masukan nominal pinjaman: Rp ";
	cin>>b;
	cout<<"Masukan durasi pinjaman (tahun): ";
	cin>>c;
	cout<<"Masukan pengajuan suku bunga pertahun (%): ";
	cin>>d;
	cout<<"--------------------------------"<<endl;
	//Output
	cout<<"Silahkan cek data anda!"<<endl<<endl<<"Nama: "<<a<<endl<<"Jumlah pinjaman: Rp "<<b<<endl<<"Durasi pinjaman: "<<c<<" Tahun"<<endl<<"Suku bunga per-tahun (%): "<<d<<" %/tahun"<<endl<<endl;
	//About Creator
	cout<<"Created by:\nNama: Abdilah Asyidiqi\nNPM: 2117051001\nKelas: A\nJurusan: S1 Ilmu Komputer";
	//Ending
	return 0;
}
