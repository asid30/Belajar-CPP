#include <iostream>
using namespace std;

class persegi{
	public:
	    double sisi;

        double luas(){
            return this -> sisi*sisi;
        }

        double keliling(){
            return this -> sisi*4;
        }
};			

int main(){
	persegi persegi;
    cin>>persegi.sisi;
    cout << persegi.luas() << endl;
    cout << persegi.keliling() << endl;
}
