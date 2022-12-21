#include <ncurses.h>
#include <windows.h>

using namespace std;

void menu_utama_play(){
	mvprintw (8,51, "MENU UTAMA");refresh();
	mvprintw (9,42, "(Tekan enter untuk memilih!)");refresh();
	attron(COLOR_PAIR(1));
	mvprintw (12,53, "PLAY:)");refresh();
	attroff(COLOR_PAIR(1));
	mvprintw (14,53, "EXIT:(");refresh();
}

void menu_utama_exit(){
	mvprintw (8,51, "MENU UTAMA");refresh();
	mvprintw (9,42, "(Tekan enter untuk memilih!)");refresh();
	mvprintw (12,53, "PLAY:)");refresh();
	attron(COLOR_PAIR(1));
	mvprintw (14,53, "EXIT:(");refresh();attroff(COLOR_PAIR(1));refresh();
}

void play(){
	start_color();
	init_pair(1,COLOR_RED,COLOR_RED);
	init_pair(2,COLOR_WHITE,COLOR_WHITE);
	
	//sumbu y = 7 & 9
	//sumbu x = 60 sampai 116
	
	int a=9;
	int b=116;
	int c=7;
	int d=105;
	int e=7;
	int f=80;
	
	int time=50;//time
	
	attron(COLOR_PAIR(1));
	mvprintw(8,0,"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	attroff(COLOR_PAIR(1));
	
	mvprintw(a,b,"00");//kotak1
	mvprintw(c,d,"00");//kotak2
	mvprintw(e,f,"00");//kotak3
	
	for(int i = 0;;i++){
		for(int i = 0;i<120;i++){
		clear();
		attron(COLOR_PAIR(2));
		mvprintw(8,0,"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		mvprintw(a,b-i,"00");
		mvprintw(c,d-i,"00");
		mvprintw(e,f-i,"00");
		Sleep(time);refresh();
		attroff(COLOR_PAIR(1));refresh();
		}
	}
}

void exit(){
	exit(0);
}

void warna(){
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_WHITE);
}

int main(){
	
	char ch;
	int select;

	initscr();
	warna();
	
	menu_utama_play();select=1;
	
	for(int i=0;;){
	noecho();
	ch = getch();
		if(ch==72){
			clear();
	        menu_utama_play();select=1;
		}
		else if(ch == 80){
			clear();
	        menu_utama_exit();select=2;
		}
		
		if(ch == '\n'){
			
			if(select == 1){
				play();
			}
			if(select == 2){
				exit();
			}
		}
	}
	
	getch();
	refresh();
	endwin();
	
}
