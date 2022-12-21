#include <iostream>
#include <stdlib.h>

using namespace std;
int ukt(int y){
return y;
}
int main()
{
    long int z;
    int menu,b,MENU,I,gaji;
    string  a,c,d,e,f,g;
    MENU:
  cout<<"1.DATA DIRI"<<endl;
  cout<<"2.DATA KEDUA ORANG TUA"<<endl;
  cout<<"==============================================================================\n";
  cout<<"pilih menu :";cin>>menu;
  cout<<"\n\n\n\n";
  system("cls");
if(menu==1){

    cout<<"===============================DATA DIRI===============================================\n";
    cout<<"NAMA           :";cin>>a;
    cout<<"NPM            :";cin>>g;
    cout<<"TANGGAL LAHIR  :";cin>>b;
    system("cls");
   cout<<"masukan data orang tua";
    goto MENU;

}
if(menu==2){

    cout<<"===============================DATA ORANG TUA===============================================\n";
    cout<<"MAHSUKAN DATA AYAH\n\n";
    cout<<"NAMA AYAH            :"; cin>>a;
    cout<<"PILIH PEKERJAAN AYAH :"<<endl;
    cout<<"                      1.pedagang\n";
    cout<<"                      2.petani\n";
    cout<<"                      3.nelayan\n";
    cout<<"                      4.wira usaha\n";
    cout<<"                      5.pegawai negri\n";
    cout<<"                      6.polisi\n";
    cout<<"                      7.guru honor\n";
    cout<<"                      8.lainnya\n";
    cin>>b;
    switch(b){
    case 1:cout<<"ayah bekerja sebagai pedagang\n";break;
    case 2:cout<<"ayah bekerja sebagai petani\n";break;
    case 3:cout<<"ayah bekerja sebagai nelayan\n";break;
    case 4:cout<<"ayah bekerja sebagai wira usaha\n";break;
    case 5:cout<<"ayah bekerja sebagai pegawai negri\n";break;
    case 6:cout<<"ayah bekerja sebagai polisi\n";break;
    case 7:cout<<"ayah bekerja sebagai guru honor\n";break;
    default :cout<<"lainnya\n";break;
    }
    cout<<"Gaji Perbulan :\n";
    cout<<"1.<1.000.000\n";
    cout<<"2.>1.000.000\n";
    cin>>gaji;
    if(gaji==1){
       for(long int z=1000000;z>=1000000;z-=1000000){
    cout<<"             "<<z<<endl; }
    }

else{
        cout<<"langsung masukan nominalnya  :";
        cin>>b;
        cout<<b;
}
     cin>>I;
    switch(I){
    case 1:cout<<"IBU bekerja sebagai pedagang\n";break;
    case 2:cout<<"IBU bekerja sebagai petani\n";break;
    case 3:cout<<"IBU bekerja sebagai nelayan\n";break;
    case 4:cout<<"IBU bekerja sebagai wira usaha\n";break;
    case 5:cout<<"IBU bekerja sebagai pegawai negri\n";break;
    case 6:cout<<"IBU bekerja sebagai polisi\n";break;
    case 7:cout<<"IBU bekerja sebagai guru honor\n";break;
    default :cout<<"lainnya\n";break;
    }

    return 0;
}
}
