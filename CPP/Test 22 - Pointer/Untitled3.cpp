#include <iostream>
using namespace std;

void vPtr(void* x,char a){
	if(a=='c'){
		cout<<"ceng "<<*(char*)x;
	}
	else if(a=='i'){
		int z;
		do{
			cout<<"ing"<<endl;
			z++;
		}while(z!=*(int*)x);
	}
}

int main(){
//	char b = 'k';
//	void *x = &b;
//	vPtr(x, 'c');
	
	int b = 3;
	void *x = &b;
	vPtr(x, 'i');
}
