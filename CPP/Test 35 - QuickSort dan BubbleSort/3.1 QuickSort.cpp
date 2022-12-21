/*
Disusun Oleh: Abdilah Asyidiqi
Kelas: D
NPM: 2117051001
*/

/*
1. Langkah pertama adalah memasukan 5 bilangan secara acak yang akan disimpan kedalam array
2. Langkah kedua menampung nilai array
3. Membandingkan masing-masing nilai dalam array dengan nilai yang ditampung sementara
4. Jika indeks sebelum lebih besar dari indeks sesudah maka tuker nilai
5. Lakukan kembali langkah ke 3 sampai tidak ada lagi indeks yang dapat ditukar
*/

#include <iostream>
using namespace std;

//quick sort function
void sort(int array[], int down, int up){
	int n = up;
	int m = down;
	int swap;
	
	//quick sorting
	int nampung = array[(down+up)/2];
	do{
		while(array[m]<nampung){
			m++;
		}
		while(array[n]>nampung){
			n--;
		}
		if(m<=n){
			swap = array[m];
			array[m] = array[n];
			array[n] = swap;
			m++;
			n--;
		}
	}while(m<n);
	if(down<n){
		sort(array, down, n);
	}
	if(m<up){
		sort(array, m, up);
	}
	//end sorting
}

//main function
int main(){
	int array[5];
	
	//input
	cout<<"Masukan 5 angka secara acak yang akan di sorting ascending!\n= ";
	for(int m=0; m<5; m++){
		cin >> array[m];
	}
	//panggil fungsi
	sort(array, 0, 5-1);
	//output nilai
	cout<<"Hasil sorting\n= ";
	for(int m=0; m<5; m++){
		cout << array[m] << " ";
	}
	return 0;
}
