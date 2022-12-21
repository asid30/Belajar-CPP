#include <iostream>
using namespace std;

class maha{
	private :
		struct data{
			string nama;
			string npm;
			float uts;
			float uas;
		}data;
		float hasil;
		
	public :
		maha(){
			this -> data.nama = "AbdilahAsyidiqi";
			this -> data.npm = "2117051001";
			this -> data.uts = 0;
			this -> data.uas = 0;
			this -> hasil = 0;
		}
		void setNama(string nama){
			this -> data.nama = nama;
		}
		string getNama(){
			return this -> data.nama;
		}
		void setNpm(string npm){
			this -> data.npm = npm;
		}
		string getNpm(){
			return this -> data.npm;
		}
		void setUts(float uts){
			this -> data.uts = uts;
		}
		float getUts(){
			return this -> data.uts;
		}
		void setUas(float uas){
			this -> data.uas = uas;
		}
		float getUas(float uas){
			return this -> data.uas;
		}
		float cari_nilai(){
			hasil = (data.uts + data.uas)/2;
			return this -> hasil;
		}
		char cetak_mutu(){
			if(hasil >= 80 && hasil <= 100){
				return 'A';
			}
			else if(hasil >= 68 && hasil < 80){
				return 'B';
			}
			else if(hasil >= 56 && hasil < 68){
				return 'C';
			}
			else if(hasil >= 45 && hasil < 56){
				return 'D';
			}	
			else if(hasil < 45) {
				return 'E';
			}
		}
};
