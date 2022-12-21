#include <bits/stdc++.h>
using namespace std;
// private: -> Class lain, belum tentu bisa akses class lainnya
// public: -> Class Lain, itu bisa akses ke kelas lainnya

// struct mobil{
//     char nama_mobil;
//     int harga;
// };

class mobil{
    private:
        char nama_mobil;
        int harga;
    public:
    //copy
    mobil(mobil &car){
        this->nama_mobil = car.nama_mobil;
        this->harga = car.harga;
    }
    mobil(){
        this->nama_mobil = "Ferrari";
        this->harga = 10000;
    }
    mobil(char nama_mobil, int harga){
        this->nama_mobil = nama_mobil;
        this->harga = harga;
    }
    void setNama_mobil(char nama_mobil){
        this->nama_mobil = nama_mobil;
        // this->nama_mobil = nama_mobil;
        //Ferrari = Senna
    }
    char getNama_mobil(){
        return this->nama_mobil;
    }
    void setHarga(int harga){
        this->harga = harga;
    }
    int getHarga(){
        return this->harga;
    }
    void print(){
        cout<<nama_mobil<<endl;
        cout<<harga<<endl;
    }
};
int main(){
     mobil mclaren = mobil("Lamborghini", 70000);
     mobil a = mobil(mclaren);
     mobil mclaren = mobil("Lamborghini", 70000);
     mclaren.nama_mobil = "Senna";
     mclaren.harga = 1000000;
     mclaren.setNama_mobil("Senna");
     mclaren.setHarga(5000000);
     cout<<mclaren.getNama_mobil();
     a.print();
      Point p1(10, 15); // Normal constructor is called here
     Point p2 = p1; // Copy constructor is called here
    mobil mclaren("Lamborghini", 70000);
    mobil a(mclaren);
    a.print();
    return 0;
}
