#include <ncurses.h>
#include <windows.h>
using namespace std;

void satu(){
	clear();
	printw("SELAMAT");
}

void dua(){
	clear();
	printw("BOCIL GOBLOK");
}

void tiga(){
	clear();
	printw("SELAMAT2");
}

int menu(){

	start_color();
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
		


	refresh();
	
	char pos ;
	int selection = 2;

//#define KEY_UP 72
//#define KEY_DOWN 80
//#define KEY_LEFT 75
//#define KEY_RIGHT 77
	


		
	for(int i=0; ; ){

		noecho();
		
		 pos = getch();
		 
		if(pos == 75 && (selection >= 2 && selection <=3)){
			selection--;
		}
	
		if(pos == 77 && (selection >= 1 && selection <=2)){
			selection++;
		}
		if(pos == '\n')//carriage return
		{
			clear();
			if(selection==1){
		goto loop;
	
			}
			if(selection==2){
		goto loop2;
	
			}
			if(selection==3){
		goto loop3;
	
			}
		}	
		
		
			if(selection==1){
		mvprintw(17,40,"-->MUDAH");
			
		mvprintw(17,50,"   SEDANG");
	
		mvprintw(17,60,"   SULIT");
					
			}
			if(selection==2){
		mvprintw(17,40,"   MUDAH");
	
		mvprintw(17,50,"-->SEDANG");
	
		mvprintw(17,60,"   SULIT");

			}
			if(selection==3){
		mvprintw(17,40,"   MUDAH");
	
		mvprintw(17,50,"   SEDANG");
		
		mvprintw(17,60,"-->SULIT");
		
					
			}
		
		
	}
//	a:
//	clear();
//	printw("NO 1");
//	refresh();
//	break ;
//	b:
//	clear();
//	printw("NO 2");
//	refresh();
// 	break ;
//	c:
//	clear();
//	printw("NO 3");
//	refresh();	
//	break ;
//	

	loop:
	clear();	
	printw("MUDAH");
	return 0;
	
	loop2:
	clear();	
	printw("SEDANG");
	return 0;
	
	loop3:
	clear();	
	printw("SULIT");
	return 0;;
}

int main(){
	
	initscr();	
		
	menu();

	getch();
	
	endwin();
	
}
