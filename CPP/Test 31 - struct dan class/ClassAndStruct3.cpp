#include <iostream>
#include <cmath>
using namespace std;
class Kubus{
	private:
	double sisi;
    public:
        double getSisi() {
            return this->sisi;
        }
        void setSisi(double sisi) {
            this->sisi = sisi;
        }
        double hasil;
        double volume(){
            hasil = pow(sisi,3);
            return this-> hasil;
       }
};			
int main(){
	Kubus kubus;
    kubus.setSisi(10);
    cout << kubus.volume() << endl;
}
