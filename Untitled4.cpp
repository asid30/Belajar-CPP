#include <iostream>
using namespace std;

void mengurutkan(int* arr, int size);
void menukar(int* a, int* b);

int main(int x, char const *y[]) {
	
	cout<<"Masukan 5 angka: \n";
	
	int susunanangka[5];
	int z = sizeof(susunanangka)/sizeof(*susunanangka);
	for(int m;m<5;m++){
    cin>>susunanangka[m];}

	mengurutkan(susunanangka, z);

	for(int i = 0; i < z; i++) {
		cout << susunanangka[i] << " ";
	}
}

void mengurutkan(int* susunanangka, int size) {
	bool tukar;
	int menukar = size;

	do {
		tukar = false;
		for(int i = 0; i < menukar-1; i++) {
			if(*(susunanangka + i) > *(susunanangka + i + 1)) {
				swap(*(susunanangka + i), *(susunanangka + i + 1));
				tukar = true;
			}
		}
		menukar--;
	} while (tukar);
}

void menukar(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
