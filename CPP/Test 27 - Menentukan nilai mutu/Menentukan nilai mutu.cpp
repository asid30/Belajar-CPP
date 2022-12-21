/*
Algoritma MENCETAK_HURUF_MUTU_MAHASISWA
{Mencetak huruf mutu mahasiswa dengan input adalah nilai akhir. 
Ketentuan mutu pada soal}

DEKLARASI
bill : real		{variabel buat menampung nilai}

DESKRIPSI
read(bill)		{masukan nilai}			
if bill >= 76 then				
 write('A')		
  else if bill >= 71 && bill <=76 then
   write('B+')			
    else if bill >= 66 && bill <=71 then	
     write('B')
      else if bill >= 61 && bill <=66 then
       write('C+')
        else if bill >= 56 && bill <=61 then
         write('C')
          else if bill >= 50 && bill <=56 then
           write('D')
            else bill
             write('E')	
            endif
          endif
        endif
      endif
    endif
  endif
endif
*/

#include <iostream>
using namespace std;
int main(){
	int bill;
	cout<<"Masukan nilai = ";
	cin>>bill;
	if(bill>=76){
		cout<<"Nilai mutu = A";
	}
	else if(bill>=71 && bill<=76){
		cout<<"Nilai mutu = B+";
	}
	else if(bill>=66 && bill<=71){
		cout<<"Nilai mutu = B";
	}
	else if(bill>=61 && bill<=66){
		cout<<"Nilai mutu = C+";
	}
	else if(bill>=56 && bill<=61){
		cout<<"Nilai mutu = C";
	}
	else if(bill>=50 && bill<=56){
		cout<<"Nilai mutu = D";
	}
	else{
		cout<<"Nilai mutu = E";
	}
}
