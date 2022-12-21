/*
Algoritma MENENTUKAN_PIN_BENAR_ATAU_SALAH
{Algoritma mencetak notifikasi bagi pengguna mesin ATM dengan kondisi pin benar atau pin salah (pengguna diberi kesempatan 3 kali untuk mencoba memasukkan pinnya kembali)}

Deklarasi
a : real				{Password yang benar}
b : real				{Input password}
c : real				{Maksimal kesempatan untuk mencoba}

Deskripsi
repeat					{Inisiasi perulangan}
read (a)				{Baca password}
if b==a then			{Jika input password sama dengan password benar}
  write ('BENAR')		{Cetak kata benar}
  c=2
Else					{Jika input password salah}
  write ('SALAH')		{Cetak kata salah}
Endif
Endif
until c<3				{Lakukan sampai 3x}
*/

#include <iostream>
using namespace std;
int main (){
	int a=10,b,c=0;
	do{
	cin>>b;
	if (b==a){
		cout<<"BENAR";c=2;
	}
	else {
		cout<<"SALAH"<<endl;
	}
	c++;
	}while(c<3);
}
