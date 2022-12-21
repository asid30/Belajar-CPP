#include <iostream>
using namespace std;

void sum(int* px,int n){
	int z=0;
	for(int i=0; i<n; i++){
		z=z+*(px+i);
	}
	cout<<z;
}

int main(){
	int x[]={1,2,3};
	sum(x,3);
}
