/*
Algoritma PENJUMLAHAN_MATRIKS_2X2
{Menghitung hasil penjumlahan matriks 2x2}

DEKLARASI
matriks_A : array [2][2] of real 						{matriks pertama}
matriks_B : array [2][2] of real 						{matriks kedua}
sum : array [2][2] of real 								{hasil penjumlahan matriks}
m : real 												{baris}
n : real 												{kolom}
	
DESKRIPSI
for m <- 0 to 2 do
  for n <- 0 to 2 do
    write (matriks_A [m][n]) 							{input matriks pertama}
  endfor
endfor
for m <- 0 to 2 do
  for n <- 0 to 2 do
    write (matriks_B [m][n]) 							{input matriks kedua}
  endfor
endfor
for m <- 0 to 2 do
  for n <- 0 to 2 do
    sum [m][n] <- matriks_A [m][n] + matriks_B [m][n] 	{menghitung penjumlahan matriks}
    write (sum [m][n]) 									{hasil penjumlahan ditampilkan ke layar}
  endfor
endfor
*/

#include <iostream>
using namespace std;
int main(){
	int matriks_A[2][2], matriks_B[2][2], hasil[2][2], m, n;
	cout<<"PENJUMLAHAN MATRIKS (2X2)"<<endl<<endl;
	cout << "Matriks A"<<endl;
	for(m = 0; m < 2; m++){
		for(n = 0; n < 2; n++){
			cout<<"a"<<m+1<<n+1<<" : ";
			cin >> matriks_A[m][n];
		}
	}
	cout<<endl;
	cout << "Matriks B"<<endl;
	for(m = 0; m < 2; m++){
		for(n = 0; n < 2; n++){
			cout<<"b"<<m+1<<n+1<<" : ";
			cin >> matriks_B[m][n];
		}
	}
	cout<<endl;
	cout << "Hasil : "<<endl;
	for(m = 0; m < 2; m++){
		for(n = 0; n < 2; n++){
			hasil[m][n] = matriks_A[m][n] + matriks_B[m][n];
			cout << hasil[m][n] << " ";
		}
		cout << endl;
	}
	return 0;
}
