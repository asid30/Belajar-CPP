/*
Nama	: Abdilah Asyidiqi
Kelas	: A
NPM		: 2117051001
*/

#include <ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	initscr();//mulai
	
	int a=775;//a = berapa lama jeda waktu (milisecond)
	
	start_color();//inisiasi warna
	init_pair(1,COLOR_RED,COLOR_WHITE);//tulisan warna merah background putih
	init_pair(2,COLOR_YELLOW,COLOR_WHITE);//tulisan warna kuning background putih
	init_pair(3,COLOR_GREEN,COLOR_WHITE);//tulisan warna hijau background putih
	init_pair(4,COLOR_BLUE,COLOR_WHITE);//tulisan warna biru background putih
	
	//printw untuk menyatakan apa yang ingin ditampilkan
	//refresh untuk menampilkan hasil print
	//Sleep untuk menjeda selama waktu yang diberikan
	//clear untuk menghapus tampilan dilayar
	//attron untuk mengaktifkan warna yang sudah di inisiasi bedasarkan nomor inisiasi
	
	//Bersyukur ditemukannya ctrl+c dan ctrl+v wkwkwk :V
	attron(COLOR_PAIR(4));
	printw ("a b d i l a h  a s y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(1));
	printw ("A b d i l a h  a s y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(2));
	printw ("a B d i l a h  a s y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(3));
	printw ("a b D i l a h  a s y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(4));
	printw ("a b d I l a h  a s y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(1));
	printw ("a b d i L a h  a s y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(2));
	printw ("a b d i l A h  a s y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(3));
	printw ("a b d i l a H  a s y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(4));
	printw ("a b d i l a h  A s y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(1));
	printw ("a b d i l a h  a S y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(2));
	printw ("a b d i l a h  a s Y i d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(3));
	printw ("a b d i l a h  a s y I d i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(4));
	printw ("a b d i l a h  a s y i D i q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(1));
	printw ("a b d i l a h  a s y i d I q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(2));
	printw ("a b d i l a h  a s y i d i Q i");refresh();Sleep(a);clear();attron(COLOR_PAIR(3));
	printw ("a b d i l a h  a s y i d i q I");refresh();Sleep(a);clear();attron(COLOR_PAIR(4));
	printw ("a b d i l a h  a s y i d i q i");refresh();
	getch();//menjeda tampilan sampai menekan tombol apapun
	endwin;//selesai
	
}
