#include <iostream>
#include <cmath>
using namespace std;

class Persegi{
	public:
    double a,b;
    double volume(){
        b = pow(a,3);
        return this-> b;
   }
};			
int main(){
	Persegi persegi;
    int n;
    cin >> n;
    double x[n];
    for(int i = 0; i < n; i++){        
        cin >> persegi.a;
        x[i] = persegi.volume();
    }	
    for(int i = 0; i < n; i++){
        cout << x[i] << endl;
    }
	return 0;
}
