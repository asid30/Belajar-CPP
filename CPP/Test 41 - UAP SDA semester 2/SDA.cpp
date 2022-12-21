#include <iostream>
#include <stdlib.h>
#include <conio.h>

/*Anggota Kelompok 3
  1. Abdilah Asyidiqi (2117051001)
  2. Hamzah Hanif (2117051032)
  3. Shela Rana Kezyah (2157051007)
*/

using namespace std;

struct Tnode {
   int volume;
   struct Tnode *front;
};

int x;

struct Tnode* top = NULL;
void push(int input) {
	struct Tnode* head = (struct Tnode*) malloc(sizeof(struct Tnode));
	head->volume = input;
	head->front = top;
	top = head;
}

void pop(){
	top = top->front;
    x=top->volume;//memperbaharui nilai variabel input nantinya.	
}

void display() {
	struct Tnode* ptr;
	if(top==NULL)
	cout<<"Volume Suara = 1 ";
	else{
    	ptr = top;
    	cout<<"Volume Suara = ";
    	while (ptr != NULL){
        	cout<< ptr->volume <<" ";
        	ptr = ptr->front;
		}
	}
	cout<<endl;
}

int main() {
	int choose;
	int input;
	do {
		system("CLS");
		cout<<"            Program Panel Volume    "<<endl;
		cout<<"----------------------------------------------"<<endl;
		
		cout<<"Aturan Penggunaan :"<<endl;
		cout<< "<Tekan -> (panah kanan) untuk menambah volume>"<<endl;
		cout<< "<Tekan <- (panah kiri) untuk mengurangi volume>"<<endl;
		cout<<endl;
		display();
	    choose=getch();
	    switch(choose) {
	        case 77: 
		        input++;
		        push(input);
	        	break;
	        
	        case 75: 
		        pop();
		        input=x;
		        break;
	    }
	}while(true);
	
return 0;
	
}
