#include <iostream>
#include <conio.h>
#include <stack>
using namespace std;

void stack2(){
	stack<int> ok;
	char select2;
	int stk=0;
	int c=0;
	string tulis2="Abdilah Asyidiqi\n2117051001\n\nSelamat datang di program stack simpel!\n\nInstruksi: \nUntuk menggunakan program, tekan <- (panah kiri) untuk pop dan tekan -> (panah kanan) untuk push.\n\n";
	cout<<tulis2;
	
	for(int stk; ;){
		select2=getch();
			if (select2==77){
				ok.push(stk++);
				system("CLS");
				cout<<tulis2;
				c=ok.top();
				while (c!=0){
					cout<<c<<" ";
					c--;
				}
			} 
			else if (select2==75){
				ok.pop();
				stk--;
				system("CLS");
				cout<<tulis2;
				c=ok.top();
				while (c!=0){
					cout<<c<<" ";
					c--;
				}
			}
	}
}

int main(){
	stack2();
}
