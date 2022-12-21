#include <string.h>
#include <windows.h>
#include <ncurses.h>

using namespace std;

void rintangan(){
	
	//inisiasi warna
	init_pair(1,COLOR_RED,COLOR_RED);
	init_pair(2,COLOR_WHITE,COLOR_WHITE);
	init_pair(3,COLOR_YELLOW,COLOR_YELLOW);
	
	//sumbu y = 7 & 9
	//sumbu x = 60 sampai 116
	
	//kordinat rintangan
	int a=9;
	int b=116;
//	int c=7;
//	int d=90;
//	int e=7;
//	int f=108;
//	int g=7;
//	int h=130;
	
	//kecepatan kotak, semakin kecil nilainya semakin cepat
	int time=20;
	
	int y= 7; //a=y
	int x= 2; //b=x
	
	//
	int tombol;
	char kotak[100] = "<>";
	
	attron(COLOR_PAIR(1));
	mvprintw(8,0,"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	attroff(COLOR_PAIR(1));
	
	mvprintw(a,b,"00");//kotak
//	mvprintw(c,d,"00");//kotak2
//	mvprintw(e,f,"00");//kotak3
//	mvprintw(g,h,"00");

	for(int i = 0;;i++){
		for(int i = 0;i<140;i++){
		
		noecho();
		tombol=getch();
		clear();
		
		attron(COLOR_PAIR(2));
		mvprintw(8,0,"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));

		mvprintw(a,b-i,"00"); // bawah
//		mvprintw(c,d-i,"00"); // kotak tengh
//		mvprintw(e,f-i,"00"); //kotak depan 
//		mvprintw(g,h-i,"00");
		attroff(COLOR_PAIR(1));
		Sleep(time);refresh();
		
		if(tombol==72){
			y=7;
		}
		else if(tombol==80){
			y=9;
		}
		attroff(COLOR_PAIR(1));refresh();
		
		attron(COLOR_PAIR(3));
		mvprintw(y,x, kotak);refresh();
		attroff(COLOR_PAIR(3));
		
		if(x==b){
			printw("sepatu");
		}
//		else if(y==c || x==d){
//			exit(0);
//		}
//		else if(y==e || x==f){
//			exit(0);
//		}
//		else if(y==g || x==h){
//			exit(0);
//		}
//		refresh();
		}
	}
}


int main(){
	
	keypad(stdscr,TRUE);
	
	initscr();
	
	curs_set(0);
	
	nodelay(stdscr, TRUE);
	
	noecho();
	
	start_color();
	
	while(true){
	 
	rintangan();
		
	}

	getch();
	refresh();
	endwin();
	
	}
