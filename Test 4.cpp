 #include<iostream>  
  
using namespace std; 
  
int main(){
	
	cout<<"Create by:\nAbdilah Asyidiqi\n2117051001\n--------------------------------\n";
	cout<<"Angsuran nasabah Bank Rimba\nSilahkan isi data berikut!\n-------------------------------"<<endl;

  string nama;
  float jumlah,bunga,durasi,angsuran,a,b,c,d;
  
  cout<<"Nama nasabah                = ";getline(cin,nama);
  cout<<"Jumlah pinjaman             = Rp ";cin>>jumlah;
  cout<<"Bunga pinjaman perbulan (%) = ";cin>>bunga;
  cout<<"Durasi pinjaman (bulan)     = ";cin>>durasi;cout;
  cout<<"--------------------------------"<<endl;
  
  a=jumlah/(durasi*12);
  b=bunga*12*jumlah;
  c=100*12;
  d=b/c;
  angsuran=a+d;
  
  cout<<"Berikut adalah angsuran anda:"<<endl;
  cout<<"Nama                        = "<<nama<<endl;
  cout<<"Angsuran perbulan           = Rp "<<angsuran<<endl;
  cout<<"--------------------------------"<<endl;
  
  
 
}
