#include <iostream>
#include <iomanip>
using namespace std;

typedef int angka;
typedef float pecahan;
typedef char huruf;

void sepuh(){
	
	angka umur;
	pecahan pecah;
	huruf h;
	huruf nama[10];
	
	cout<<"masukkan umur anda : ";cin>>umur;
	cout<<"Umur anda adalah "<<umur;
	cout<<"\nmasukkan bilangan pecahan : ";cin>>pecah;
	cout<<"Bilangan pecahan "<<fixed<<setprecision(6)<<pecah;
	cout<<"\nmasukkan huruf : ";cin>>h;
	cout<<"Huruf anda "<<h;
	cout<<"\nmasukkan nama : ";cin>>nama;
	cout<<"Nama anda "<<nama;
}

int main(){
	sepuh();
	return 0;
}
