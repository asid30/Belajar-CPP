/*
Algoritma MENCARI_BILANGAN_TERBESAR
{Mencari bilangan terbesar dari n bilangan}

DEKLARASI
n : real 					{jumlah bilangan}
x : array[256] of real 		{menyimpan bilangan yang dimasukan}
y : real 					{bilangan terbesar}
m : real 					{indeks pengulangan}

DESKRIPSI
read (n) 					{baca jumlah bilangan}
for m <- 0 to n do			{lakukan perulangan sebanyak n}
  read ( x[m] ) 			{masukkan bilangan}
endfor
y <- x[0]					{inisiasi indeks array pertama ke y sebagai bilangan terbesar}
for m <- 0 to n do			{lakukan perulangan sebanyak n}
  if x[m] > y then			{cari bilangan yang lebih besar dari y}
    y <- x[m]				{jika ada bilangan terbesar selain y, maka timpa nilai tersebut ke variabel y}
  endif
endfor
write (y) 					{cetak bilangan terbesar yaitu y}
*/

#include <iostream>
using namespace std;
int main(){
	int n,x[256],y,m;
	cout<<"MENCARI BILANGAN TERBESAR"<<endl<<endl;
	cout<<"Masukan jumlah bilangan : ";
	cin>>n;
	for(m = 0; m < n; m++){
		cout <<"Bilangan ke- "<<m+1<<" : ";
		cin >> x[m];
	}
	y = x[0];
	for(m = 0; m < n; m++){
		if(x[m] > y){
			y = x[m];
		}
	}
	cout<<"Bilangan terbesar : "<<y;
	return 0;
}
