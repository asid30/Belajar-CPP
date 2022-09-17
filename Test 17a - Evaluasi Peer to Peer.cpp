#include <ncurses.h>
using namespace std;

int main()
{
	initscr();
      int  i, j;
      for(i=0;i<=10;i++){
      	mvprintw(j+j,i*i, " *");
      	for(j=0;j<=i;j++){
	  }
	  }
	  
      refresh();
      getch();
      endwin();
}
