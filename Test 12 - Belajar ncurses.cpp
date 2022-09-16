// Ncurses mengolah terminal -> terminal yg dicreate oleh ncurses
// Cetak hello world -> buffer -> screen
// Yg mencetak dari buffer ke screen : refresh

#include <ncurses.h>
#include <iostream>
using namespace std;

int main(){
	int x;
	char ch;
	
	// Create terminal
	initscr();
	
	// mvprintw(baris, kolom, teks)
	// Cetak Hello World di baris ke 6 dengan didahului 5 spasi
	mvprintw(5, 5, "Hello World");
	
	printw("Hello World\n");
	
	scanw("%d", &x);
//	printw("%d", x);
	cout << &x << endl;
	
	// membersihkan layar
	clear();
	
	for(int i = 0;i < 5;i++){
		ch = getch();
		if(ch == 'a'){
			printw("Yeay!\n");
		}
	}
	
	// Refresh terminal (Mencetak output dari buffer ke terminal/screen)
	refresh();
	
	// Meminta user menekan 1 tombol bebas
	getch();
	
	// Clear and close
	endwin();
}
