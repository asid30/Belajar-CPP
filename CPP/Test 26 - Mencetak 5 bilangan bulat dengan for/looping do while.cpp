/*
Algoritma MENCETAK_5_BILANGAN_BULAT
{mencetak 5 bilangan bulat menggunakan looping do while}
DEKLARASI
i : integer {indeks pengulangan}
DESKRIPSI
i <- 1 {inisialisasi}
repeat
  write (i)
  i <- i + 1
until <= 5
*/

#include <iostream>
using namespace std;
int main(){
	int i = 1;
	do{
		cout<<i;
		i++;
	}while(i <= 5);
}
