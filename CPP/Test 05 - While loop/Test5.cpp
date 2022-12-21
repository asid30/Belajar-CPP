#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	cout<<"[Program estimasi jumlah simpanan nasabah Bank Rimba Unila]\n\nCreate by:\nAbdillah Asyidiqi\n2117051001"<<endl<<endl;
	
	int a,b,c,d=1;
	
	cout<<"Silahkan masukan data berikut: "<<endl;
	cout<<"Jumlah simpanan pokok = Rp ";cin>>a;
	cout<<"Bunga (%) = ";cin>>b;
	cout<<"Durasi simpanan = ";cin>>c;cout<<endl;
	
	cout<<"Berikut estimasi simpanan anda dalam "<<c<<" bulan: "<<endl;
	cout<<"Simpanan pokok = Rp "<<a<<endl;
	
	while(d<=c){
		
		a=a+(b*a/100);
		cout<<"Bulan ke-"<<d++<<" = Rp "<<a<<endl;
	}

}
