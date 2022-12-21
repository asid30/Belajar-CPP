#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int jumlah2,golongan[8]={0,1000000,2400000,3400000,4400000,5400000,6400000,7400000};
	cin>>jumlah2;
if(jumlah2<1000000){
		cout<<"UKT anda sebesar = Rp "<<golongan[0]<<endl<<endl;
	}
	else if(jumlah2>=1000000 && jumlah2<1700000){
		cout<<"UKT anda sebesar = Rp "<<golongan[1]<<endl<<endl;
	}
	else if(jumlah2>=1700000 && jumlah2<2700000){
		cout<<"UKT anda sebesar = Rp "<<golongan[2]<<endl<<endl;
	}
	else if(jumlah2>=2700000 && jumlah2<3700000){
		cout<<"UKT anda sebesar = Rp "<<golongan[3]<<endl<<endl;
	}
	else if(jumlah2>=3700000 && jumlah2<4700000){
		cout<<"UKT anda sebesar = Rp "<<golongan[4]<<endl<<endl;
	}
	else if(jumlah2>=4700000 && jumlah2<5700000){
		cout<<"UKT anda sebesar = Rp "<<golongan[5]<<endl<<endl;
	}
	else if(jumlah2>=5700000 && jumlah2<6700000){
		cout<<"UKT anda sebesar = Rp "<<golongan[6]<<endl<<endl;
	}
	else {
		cout<<"UKT anda sebesar = Rp "<<golongan[7]<<endl<<endl;
	}

}
