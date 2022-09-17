#include <iostream>
#include <cmath>
using namespace std;
	//fungsi

void tutup (){
	exit(0);
}

void table();
void identitas();

int main (){
	cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
	cout<<"Menu : "<<endl;
	string data_diri="(1) Mulai";
	cout<<data_diri<<endl;
	string table="(2) Table Golongan UKT";
	cout<<table<<endl;
    string exit="(3) Akhiri Program";
    cout<<exit<<endl; 
	
	int menu;
	menutry:
    cout<<"Pilih Menu = ";
    cin>>menu;
	switch(menu){
    	case 1: system ("cls");identitas();break;
    	case 2: system ("cls");
    			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
				goto daftar;
				break;
    	case 3: tutup();break;
    	default: system ("cls");
    			 cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
    			 cout<<"Menu : (Keyword yang anda masukan salah, Silahkan masukan kembali!)"<<endl;
				 string data_diri ="(1) Input data diri Mahasiswa";
				 cout<<data_diri<<endl;
				 string ukt ="(2) Daftar mahasiswa beserta golongan UKT dan besarannya";
    			 cout<<ukt<<endl;
    			 string exit="(3) Exit";
    			 cout<<exit<<endl;
    			 goto menutry;break;
	}
	daftar:
	int i,golongan1[9]={0,0,1000000,2400000,3400000,4400000,5400000,6400000,7400000};
	cout<<"============================================"<<endl;
    cout<<"     GOLONGAN UKT JURUSAN ILMU KOMPUTER     "<<endl;
    cout<<"============================================"<<endl;
    cout<<endl;
    cout<<" __________________________________________"<<endl;
    cout<<"|                       |                  |"<<endl;
    cout<<"|    Golongan UKT       |    Besaran UKT   |"<<endl;
    cout<<"|_______________________|__________________|"<<endl;
    cout<<"|                       |                  |"<<endl;
    cout<<"|  Golongan 1           |  Rp. 0           |"<<endl;
    cout<<"|  Golongan 2           |  Rp. 1000000     |"<<endl;
    for(i=3;i<=8;i++){
    	cout<<"|  Golongan "<<i<<"           |  Rp. "<<golongan1[i]<<"     |"<<endl;
	}
	cout<<"|_______________________|__________________|"<<endl;
    cout<<"Menu:"<<endl;
	int pilih2;
	cout<<"- Tekan 1 untuk kembali\n- Tekan angka apa saja (selain 1) untuk mengakhiri program\nPilihan anda = ";cin>>pilih2;
	if(pilih2==1){
		system ("cls");
		main();
	}
	else if(pilih2==2){
		tutup();
	}
}

void identitas(){
	
	//variable
	string nama,npm,tgll,a,b,c;
	string nama1,lain1;
	string nama2,lain2;
	char kerja1,kerja2,pilih1;
	int gaji1,gaji2,jumlah,jumlah2,golongan[8]={0,1000000,2400000,3400000,4400000,5400000,6400000,7400000};
	string judul="Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n\n";

	cout<<judul;
	cin.ignore();
	//data diri
	cout<<"Masukan data diri mahasiswa"<<endl;
	cout<<"1. Nama                       = ";getline(cin,nama);
	cout<<"2. NPM                        = ";getline(cin,npm);
	cout<<"3. Tanggal Lahir (DD/MM/YYYY) = ";getline(cin,tgll);cout<<endl;
	
	cout<<"Masukan data orang tua"<<endl;
	//ayah
	cout<<"1. Nama ayah                  = ";getline(cin,nama1);
	cout<<"2. Pekerjaan                  ";
	trya:
	cout<<"\n   a. Buruh\n   b. Pegawai swasta\n   c. PNS\n   d. Wiraswasta\n   e. TNI/Polri\n   f. Tidak bekerja\n   g. Lainnya\n"<<endl<<"   Pilih salah satu\n   (a,b,c,d,e,f atau g)       = ";
	cin>>kerja1;
//	cin.ignore(999999999999999999,'\n');
	
		if(kerja1=='a'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = Buruh";a="Buruh";
		}
		else if(kerja1=='b'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = Pegawai Swasta";a="Pegawai Swasta";
		}
		else if(kerja1=='c'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = PNS";a="PNS";
		}
		else if(kerja1=='d'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = Wiraswasta";a="Wiraswsta";
		}
		else if(kerja1=='e'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = TNI/Polri";a="TNI/Polri";
		}
		else if(kerja1=='f'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = Tidak Bekerja";a="Tidak Bekerja";
		}
		else if(kerja1=='g'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                    "<<endl;
			cout<<"   Lainnya                    = ";cin>>lain1;a=lain1;
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<lain1<<endl;
		}
		else {
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan (Keyword yang anda masukan salah, Silahkan masukan kembali!)"<<lain1<<endl;
			goto trya;
		}
	
	cin.ignore();
	cout<<"3. Pendapatan                 = ";cin>>gaji1;cout<<endl;
	
	//Ibu
	cin.ignore();
	cout<<"4. Nama ibu                   = ";getline(cin,nama2);
	cout<<"5. Pekerjaan                  ";
	tryb:
	cout<<"\n   a. Buruh\n   b. Pegawai swasta\n   c. PNS\n   d. Wiraswasta\n   e. TNI/Polri\n   f. Tidak bekerja\n   g. Lainnya\n"<<endl<<"   Pilih salah satu\n   (a,b,c,d,e,f atau g)       = ";
	cin>>kerja2;
	cin.ignore(999999999999999999,'\n');
	
		if(kerja2=='a'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;b="Buruh";
			cout<<"5. Pekerjaan                  = "<<b;
		}
		else if(kerja2=='b'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;b="Pegawai Swasta";
			cout<<"5. Pekerjaan                  = "<<b;
		}
		else if(kerja2=='c'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;b="PNS";
			cout<<"5. Pekerjaan                  = "<<b;
		}
		else if(kerja2=='d'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;b="Wiraswasta";
			cout<<"5. Pekerjaan                  = "<<b;
		}
		else if(kerja2=='e'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;b="TNI/Polri";
			cout<<"5. Pekerjaan                  = "<<b;
		}
		else if(kerja2=='f'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;b="Tidak bekerja";
			cout<<"5. Pekerjaan                  = "<<b;
		}
		else if(kerja2=='g'){
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;
			cout<<"5. Pekerjaan                    "<<endl;
			cout<<"   Lainnya                    = ";cin>>lain2;b=lain2;
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;
			cout<<"5. Pekerjaan                  = "<<lain2<<endl;
		}
		else {
			system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;
			cout<<"5. Pekerjaan (Keyword yang anda masukan salah, Silahkan masukan kembali!)"<<lain1<<endl;
			goto tryb;
		}
	
	cin.ignore(1,'\n');
	cout<<"6. Pendapatan                 = ";cin>>gaji2;cout<<endl;
	
	cout<<"Uang Kuliah Tunggal (Persemester)"<< endl;

	jumlah=gaji1+gaji2;
	jumlah2=(jumlah*25)/100;
	
	if(jumlah2<1000000){
		cout<<"1. UKT anda sebesar           = Rp "<<golongan[0]<<endl<<endl;c="0";
	}
	else if(jumlah2>=1000000 && jumlah2<1700000){
		cout<<"1. UKT anda sebesar           = Rp "<<golongan[1]<<endl<<endl;c="1000000";
	}
	else if(jumlah2>=1700000 && jumlah2<2700000){
		cout<<"1. UKT anda sebesar           = Rp "<<golongan[2]<<endl<<endl;c="2400000";
	}
	else if(jumlah2>=2700000 && jumlah2<3700000){
		cout<<"1. UKT anda sebesar           = Rp "<<golongan[3]<<endl<<endl;c="3400000";
	}
	else if(jumlah2>=3700000 && jumlah2<4700000){
		cout<<"1. UKT anda sebesar           = Rp "<<golongan[4]<<endl<<endl;c="4400000";
	}
	else if(jumlah2>=4700000 && jumlah2<5700000){
		cout<<"1. UKT anda sebesar           = Rp "<<golongan[5]<<endl<<endl;c="5400000";
	}
	else if(jumlah2>=5700000 && jumlah2<6700000){
		cout<<"1. UKT anda sebesar           = Rp "<<golongan[6]<<endl<<endl;c="6400000";
	}
	else {
		cout<<"1. UKT anda sebesar           = Rp "<<golongan[7]<<endl<<endl;c="7400000";
	}
	
	tryc:
	cout<<"Apakah anda ingin mengisi data kembali? (y/n) = ";cin>>pilih1;
	if(pilih1=='y'){
		system ("cls");
		identitas();
	}
	else if (pilih1=='n'){
		system ("cls");
		main();
	}
	else {
		system ("cls");
			cout<<"Program Klasifikasi Golongan UKT Mahasiswa Unila (Jurusan Ilmu Komputer)\n================================================\n"<<endl;
			cout<<"Masukan data diri mahasiswa"<<endl;
			cout<<"1. Nama                       = "<<nama<<endl;
			cout<<"2. NPM                        = "<<npm<<endl;
			cout<<"3. Tanggal Lahir (DD/MM/YYYY) = "<<tgll<<endl<<endl;
			cout<<"Masukan data orang tua\n";
			cout<<"1. Nama ayah                  = "<<nama1<<endl;
			cout<<"2. Pekerjaan                  = "<<a<<endl;
			cout<<"3. Pendapatan                 = "<<gaji1<<endl<<endl;
			cout<<"4. Nama Ibu                   = "<<nama2<<endl;
			cout<<"5. Pekerjaan                  = "<<b<<endl;
			cout<<"6. Pendapatan                 = "<<gaji2<<endl<<endl;
			cout<<"Uang Kuliah Tunggal (Persemester)"<< endl;
			cout<<"1. UKT anda sebesar           = Rp "<<c<<endl<<endl;
			cout<<"(Keyword yang anda masukan salah, Silahkan masukan kembali!)"<<endl;
			goto tryc;
	}
}
