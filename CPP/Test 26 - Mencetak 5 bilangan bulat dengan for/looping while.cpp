/*
Algoritma MENCETAK_5_BILANGAN_BULAT
{mencetak 5 bilangan bulat menggunakan looping while}
DEKLARASI
i : integer {indeks pengulangan}
DESKRIPSI
i <- 1 {inisialisasi}
while i <= 5 do
  write (i)
  i <- i + 1
endwhile
*/

#include <iostream>
using namespace std;
int main(){
	int i = 1;
	while(i <= 5){
		cout<<i;
		i++;
	}
}
