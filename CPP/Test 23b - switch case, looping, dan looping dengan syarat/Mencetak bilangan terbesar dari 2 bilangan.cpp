/*
Algoritma MENENTUKAN_2_BILANGAN_TERBESAR
{Algoritma Mencetak bilangan terbesar dari 2 bilangan yang dibaca dari piranti masukan}

Deklarasi
a : real				{Variabel bilangan pertama}
b : real				{Variabel bilangan kedua}

Deskripsi
read (a)				{Baca bilangan pertama}
read (b)				{Baca bilangan kedua}
if a>b then				{Jika bilangan pertama lebih besar dari bilangan kedua}
  write a				{Cetak bilangan pertama}
Else
if b>a then				{Jika bilangan kedua lebih besar dari bilangan pertama}
  write b				{Cetak bilangan kedua}
Endif
Endif
*/

#include <iostream>
using namespace std;
int main (){
	int a,b;
	cin>>a>>b;
	if (a>b){
		cout<<a;
	}
	else if (b>a){
		cout<<b;
	}
}
