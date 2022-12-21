/*
Algoritma MENCETAK_ANGKA_(1 SD 4)_ANGKA_DIBACA_DARI_PIRANTI_MASUKAN
{Algoritma mencetak angka 1 sd 4 dengan output berupa bacaan angka tersebut}

Deklarasi
bill : real					{Variabel untuk bilangan}

Deskripsi
read(bill)					{Baca input variabel x}
case(bill)
bill=1 : write ('Satu')		{Cetak kata Satu}
bill=2 : write ('Dua')		{Cetak kata Dua}
bill=3 : write ('Tiga')		{Cetak kata Tiga}
bill=4 : write ('Empat')	{Cetak kata Empat}
Otherwise : write ('Bukan termasuk bilangan 1 sampai dengan 4')
Endcase
*/

#include <iostream>
using namespace std;
int main (){
	int bill;
	cin>>bill;
	switch (bill){
		case 1:cout<<"Satu";break;
		case 2:cout<<"Dua";break;
		case 3:cout<<"Tiga";break;
		case 4:cout<<"Empat";break;
		default:cout<<"Bukan termasuk bilangan 1 sampai dengan 4";
	}
}
