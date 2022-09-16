/*
Nama : Abdilah Asyidiqi
NPM  : 2117051001
*/

#include <ncurses/ncurses.h>
using namespace std;

int main(){
	
	initscr();//mulai
	
	char a[256];//a=nama
	char b[256];//b=npm
	
	getstr (a);//input nama
	scanw ("%s", b);//input npm

	printw ("Nama : ");
	printw (a);//output nama
	printw ("\nNPM  : ");
	printw (b);//output npm

	getch();//menjeda tampilan sampai menekan tombol apapun

	endwin();//selesai
}
