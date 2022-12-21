#include <iostream>
#include <cstring>
using namespace std;

class Lagu{
	private:
		string penyanyi;
		string judul_lagu;
		string tahun;
	
	public:
		Lagu(){
			this -> penyanyi = "";
			this -> judul_lagu = "";
			this -> tahun = "";	
		}
		string getPenyanyi(){
			return this -> penyanyi;
		}
		void setPenyanyi(string penyanyi){
			this -> penyanyi = penyanyi;
		}
		string getJudul_lagu(){
			return this -> judul_lagu;
		}
		void setJudul_lagu(string judul_lagu){
			this -> judul_lagu = judul_lagu;
		}
		string getTahun_rilis(){
			return this -> tahun;
		}
		void setTahun_rilis(string tahun){
			this -> tahun = tahun;
		}
		void cetak(){
			cout<<"Nama : "<<penyanyi<<endl;
			cout<<"Judul : "<<judul_lagu<<endl;
			cout<<"Tahun : "<<tahun<<endl;
		}
};

int main (){
	string a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	Lagu beti;
	beti.setPenyanyi(a);
	beti.setJudul_lagu(b);
	beti.setTahun_rilis(c);
	beti.cetak();
	return 0;
}
