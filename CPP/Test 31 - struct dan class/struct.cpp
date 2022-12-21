#include <iostream>
using namespace std;

struct kacang{
	string enak;
	int harga;
};

int main(){
	kacang goreng;
	goreng.enak = "Mantap";
	goreng.harga = 2000;
	cout<<goreng.enak<<endl;
	cout<<goreng.harga;
}
