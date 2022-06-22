#include <ncurses.h>
using namespace std;

int main(){
	int x = 1, y = 1;
	initscr();
	
	//newwin(height, width, start_x, start_y)
	WINDOW * win = newwin(20, 50, 1, 1);
	// x-min = 1, x-max = 28
	// y-min = 1, y-max = 18
	refresh();
	
	box(win, 0, 0);
	wmove(win, y, x);
	wprintw(win, "O");
	wrefresh(win);
	
	while(true){
		char movement = wgetch(win);
		
		switch(movement){
			case 'a':
				// Cek apakah kursor (objek) sudah di ujung kiri
				if(x == 1){
					x = 48;
				}else{
					// 5,6
					// 4,6
					x--;
				}
				break;
			case 'd':
				if(x == 28){
					x = 1;
				}else{
					x++;
				}
				break;
			case 'w':
				if(y == 1){
					y = 18;
				}else{
					y--;
				}
				break;
			case 's':
				if(y == 18){
					y = 1;
				}else{
					y++;
				}
				break;
		}
		
		wclear(win);
		box(win, 0, 0);
		wmove(win, y, x);
		wprintw(win, "O");
		wrefresh(win);
		
		// Looping stop
	}
	
	getch();
	endwin();
}
