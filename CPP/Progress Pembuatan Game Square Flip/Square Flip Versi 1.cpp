#include <string.h>
#include <windows.h>
#include <ncurses.h>

using namespace std;

void warna();
void menu_utama_play();
void menu_utama_exit();
void play();
void exit();

int main(){
	
	char ch;
	int select;
	
//	keypad(stdscr,TRUE);
	
	initscr();

	warna();//memanggil fungsi warna
	
	curs_set(0);//menghilangkan tanda kursor
	
	nodelay(stdscr, TRUE);
	
	noecho();
	
	start_color();
	
	while(true){
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
					exit(0);
				}
			}
		}	
	}

	getch();
	refresh();
	endwin();
	
}

void warna(){
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_WHITE);
}

void menu_utama_play(){
	mvprintw (8,51, "MENU UTAMA");refresh();
	mvprintw (9,42, "(Tekan enter untuk memilih!)");refresh();
	attron(COLOR_PAIR(1));
	mvprintw (12,53, "PLAY");refresh();
	attroff(COLOR_PAIR(1));
	mvprintw (14,53, "EXIT");refresh();
}

void menu_utama_exit(){
	mvprintw (8,51, "MENU UTAMA");refresh();
	mvprintw (9,42, "(Tekan enter untuk memilih!)");refresh();
	mvprintw (12,53, "PLAY");refresh();
	attron(COLOR_PAIR(1));
	mvprintw (14,53, "EXIT");refresh();attroff(COLOR_PAIR(1));refresh();
}

void play(){
	
	//inisiasi warna
	init_pair(1,COLOR_RED,COLOR_RED);
	init_pair(2,COLOR_WHITE,COLOR_WHITE);
	init_pair(3,COLOR_YELLOW,COLOR_YELLOW);
	
	//sumbu y = 7 dan 9
	//sumbu x = 60 sampai 116
	
	//kordinat rintangan y,x (kotak merah)
	int a=7;
	int b=100;
	int c=9;
	int d=111;
	int e=7;
	int f=122;
	int g=9;
	int h=133;
	int j=7;
	int k=144;
	int l=9;
	int m=155;
	int n=7;
	int o=166;
	
	//kecepatan kotak, semakin kecil nilainya semakin cepat
	int time=5;
	
	int y= 7; //a=y
	int x= 2; //b=x
	
	//kotak kuning
	int tombol;
	char kotak[100] = "<>";
	
	//garis putih
	attron(COLOR_PAIR(1));
	mvprintw(8,0,"0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	attroff(COLOR_PAIR(1));
	
	//munculin kotak merah pas opening
	mvprintw(a,b,kotak);
	mvprintw(c,d,kotak);
	mvprintw(e,f,kotak);
	mvprintw(g,h,kotak);
	mvprintw(j,k,kotak);
	mvprintw(l,m,kotak);
	mvprintw(n,o,kotak);
	
	//looping utama
	for(int i = 0;;i++){
		for(int i = 0;i<170;i++){
		
		noecho();
		tombol=getch();//menangkap input tombol
		clear();
		
		//mempertahankan keberadaan garis agar tidak hilang saat dilooping
		attron(COLOR_PAIR(2));
		mvprintw(8,0,"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(1));
		
		//munculin kotak merah dan membuat kotak merah agar dapat bergerak
		mvprintw(a,b-i,kotak); 
		mvprintw(c,d-i,kotak); 
		mvprintw(e,f-i,kotak); 
		mvprintw(g,h-i,kotak);
		mvprintw(j,k-i,kotak);
		mvprintw(l,m-i,kotak);
		mvprintw(n,o-i,kotak);
		
		attroff(COLOR_PAIR(1));
		Sleep(time);refresh();
		
		//membuat kotak naik dan turun
		if(tombol==72){
			y=7;
		}
		else if(tombol==80){
			y=9;
		}
		attroff(COLOR_PAIR(1));refresh();
		
		//kondisi naik turun kotak kuning
		attron(COLOR_PAIR(3));
		mvprintw(y,x, kotak);refresh();
		attroff(COLOR_PAIR(3));
		
		//kondisi manual jika kotak kuning menabrak kotak merah
		if(y==a && x==b-i){
			exit();
		}
		else if(y==c && x==d-i){
			exit();
		}
		else if(y==e && x==f-i){
			exit();
		}
		else if(y==g && x==h-i){
			exit();
		}
		else if(y==j && x==k-i){
			exit();
		}
		else if(y==l && x==m-i){
			exit();
		}
		else if(y==n && x==o-i){
			exit();
		}
		
		//refresh biar seger
		refresh();
		}
	}
}

void exit(){
	exit(0);
}
