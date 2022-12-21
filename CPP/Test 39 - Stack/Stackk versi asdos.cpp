#include <iostream>
#include <windows.h>
#include <stdlib.h> // menggunakan system("cls")
#include <conio.h> // menggunakan getch()
#define MAX 10 // batas stack yang ingin dibuat, boleh lebih
using namespace std; 

int top=-1, Stack[MAX];

bool isFull(){
	if(top == MAX-1)
	   return true;
	else
	   return false;
}

bool isEmpty(){
	if(top == -1)
	   return true;
	else
	   return false;
}


void push(){
    if(isFull()){
        cout << ">> Stack sudah Penuh !" << endl;
    }else{
        ++top; //top yang awalnya ada diposisi indeks -1, menjadi di indeks 0
        cout << ">> Masukan Data : ";
        cin >> Stack[top];
        cout << "\nPada Index ke '" << top;
        cout << endl;
        cout << "Data [" << Stack[top] << "] Telah Ditambah ! " << endl;
    }
}
void pop(){
    if(isEmpty()){ //jika stack kosong
        cout << ">> Stack Kosong !" << endl;
    }else{
        cout << "\nData [" << Stack[top] << "] pada index ke '" << top << "' dalam Stack Diambil !" << endl;
        top--; //posisi top akan berkurang dan pindah ke data yang dibawahnya sebanyak satu
    }
}
void search()
{
  int i;
  int n;
  int cari;
  bool cek = false;
  
  cout << "Masukkan data yang ingin dicari : "; cin>>cari;
	
	for (i=0; i<MAX; i++){
		if(cari==Stack[i]){
			cout<<"Data ditemukan pada indeks ke "<<i+1<<endl;		
			cek = true;
			break;
		}
	}
	if (cari != Stack[i]){
		cout<<"Data tidak ditemukan pada indeks manapun";
	}
  }
  
int clearr(){
    return top = -1;
}
void Print(){
    if (top == -1) {
 cout << "          Stack : ";
        cout << "\n===========================" << endl;
        cout << "          Empty ! \n===========================" << endl;
    }
    else {
        cout << "          Stack : ";
        cout << "\n===========================" << endl;
    
	    for (int i = top; i >= 0; i--){
             cout << "     XXXXX[ " << Stack[i] << " ]XXXXX" << endl;
            }
             cout << "===========================" << endl;
    }
}
int main()
{
    int choose;
    do {
        Print();
        cout << "\n1. Push"
             << "\n2. Pop"
             << "\n3. Search"
             << "\n4. Clear"
             << "\n5. Exit"
             << "\n\n>> Choose : "; cin >> choose;
        switch (choose){
            case 1:
                push();
                Sleep(1000);
				getch();
                break;
            case 2:
                pop();
                Sleep(1000);
				getch();
                break;
            case 3:
            	search();
            	Sleep(1000);
            	getch();
            	break;
            case 4:
                clearr();
                cout << "\nClear Succes" << endl;
                Sleep(1000);
				getch();
                break;
            case 5:
                cout << "Terima Kasih telah menggunakan program ini :)" << endl;
                Sleep(1000);
				getch();
                break;
            default:
                cout << "Pilihan tidak ada\nMasukan select2 sesuai dengan daftar" << endl;
                Sleep(1000);
				getch();
                break;
        }
        system("cls");
    }while(choose !=4);
}
