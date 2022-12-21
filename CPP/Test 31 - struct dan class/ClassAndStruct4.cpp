#include <iostream>
#include <cmath>
using namespace std;
class Kubus{
	public :
	double x=10;
        Kubus(){
            this -> x = 10;
        }
        Kubus(double x){
            this -> x = x;
        }
        Kubus(Kubus &Kubus){
            this -> x = Kubus.x;
        }
    public:
        double getSisi() {
            return this->x;
        }
        void setSisi(double x) {
            this->x = x;
        }
        double y;
        double volume(double x){
            y = pow(x,3);
            return this-> y;
       }
};			
int main(){
	Kubus kubus;
	cout<<kubus.volume()<<endl;
}
