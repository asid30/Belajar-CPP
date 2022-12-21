#include <iostream>
#include <cstring>
using namespace std;

char *balik(char *str){
	char sum[25];
	int i,x,z=0;
	
	do{
		z++;
	}while (str[z]!='\0');
	x=z-1;
	
	for (i=0;i<z;i++){
		sum[i]=str[x];
		x--;
	}
	
	sum[i]='\0';
	cout<<sum;
	
return 0;
}

int main(){
    char str[] = "Pemrograman Terstruktur";
	cout<<balik(str)<<endl;
}
