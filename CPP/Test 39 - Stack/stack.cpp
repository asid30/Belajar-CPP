#include <iostream>
#include <conio.h>
using namespace std;

void stack1 (){
	string tulis="Abdilah Asyidiqi\n2117051001\n\nSelamat datang di program stack simpel!\n\nInstruksi: \nUntuk menggunakan program, tekan <- (panah kiri) untuk pop dan tekan -> (panah kanan) untuk push (max 30 stack).\n\n";
	char select;//select berfungsi untuk menyimpan nilai getch yg di ambil dari piranti
	int a=0,b=0;//nilai a berfungsi untuk seberapa banyak output yang akan di tampilakan
				//nilai b berfungsi untuk push atau pop
	int z=0;	//nilai z adalah data yang akan di push atau pop
	int *aptr=&z;//pointer dari z
	
	cout<<tulis;
	
	for(int i=0;;){//infinity loop
	select = getch();//mengambil input piranti
		if (select == 75){
			a--;//pop
			//batas bawah
			if (a==-1){
				a=0;
			}
			else{
			}
			system("CLS");//menghapus layar
			cout<<tulis;
			do{
				cout<<*aptr+b<<" ";//menampilkan output
				b++;
			}while(b<=a);
			b=0;//mengembalikan push atau pop ke default setelah sebelumnya di increment
		}
		else if (select == 77){
			a++;//push
			//batas atas
			if (a==31){
				a=30;
			}
			else{
			}
			system("CLS");//menghapus layar
			cout<<tulis;
			do{
				cout<<*aptr+b<<" ";//menampilkan output
				b++;
			}while(b<=a);
			b=0;//mengembalikan push atau pop ke default setelah sebelumnya di increment
		}
	}
}

int main (){
	stack1();
	return 0;
}
