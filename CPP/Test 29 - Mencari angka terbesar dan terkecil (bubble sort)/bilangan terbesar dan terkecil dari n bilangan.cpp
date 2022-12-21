/*
Algoritma MENCARI_BILANGAN_TERBESAR_DAN_TERKECIL
{Mencari bilangan terbesar dan terkecil  dari n bilangan dengan array}

DEKLARASI
n : real 					{jumlah bilangan}
x : array[256] of real 		{menyimpan bilangan yang dimasukan}
y : real 					{bilangan terbesar}
z : real					{bilangan terkecil}
m : real 					{indeks pengulangan}

DESKRIPSI
read (n) 					{baca jumlah bilangan}
for m <- 0 to n do			{lakukan perulangan sebanyak n}
  read ( x[m] ) 			{masukkan bilangan}
endfor
y <- x[0]					{inisiasi indeks array pertama ke y sebagai bilangan terbesar}
z <- x[0]					{inisiasi indeks array pertama ke z sebagai bilangan terkecil}
for m <- 0 to n do			{lakukan perulangan sebanyak n}
  if x[m] > y then			{cari bilangan yang lebih besar dari y}
    y <- x[m]				{jika ada bilangan terbesar selain y, maka timpa nilai tersebut ke variabel y}
  else 
    if x[m] < z then		{cari bilangan yang lebih kecil dari z}
        z <- x[m]			{jika ada bilangan terkecil selain z, maka timpa nilai tersebut ke variabel z}
    endif
  endif
endfor
write (y) 					{cetak bilangan terbesar yaitu y}
write (z) 					{cetak bilangan terkecil yaitu z}
*/

#include <iostream>
using namespace std;
int main(){
	int n,x[256],y,z,m;
	cout<<"MENCARI BILANGAN TERBESAR DAN TERKECIL"<<endl<<endl;
	cout<<"Masukan jumlah bilangan : ";
	cin>>n;
	for(m = 0; m < n; m++){
		cout <<"Bilangan ke- "<<m+1<<" : ";
		cin >> x[m];
	}
	cout<<endl;
	y = x[0];
	z = x[0];
	for(m = 0; m < n; m++){
		if(x[m] > y){
			y = x[m];
		}
		else if(x[m] < z){
			z = x[m];
		}
	}
	cout<<"Bilangan terbesar : "<<y<<endl;
	cout<<"Bilangan terkecil : "<<z;
	return 0;
}
