#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int n,x[n];
	float a,b;
	
	cout<<"Program mencari nilai rata-rata\n\nDisusun oleh :\nNama : Abdilah Asyidiqi\nNPM  : 2117051001\n--------------------------------\n\n";
	
	cout<<"Banyaknya data = ";
	cin>>n;
	
	cout<<"Masukan data nilai = ";
	
	for (int i=0;i<n;i++){
		cin>>x[i];
		
	}
	cout<<endl;
	
	for (int i=0;i<n;i++){
		cout<<"Data ke-"<<i+1<<" = ";
		cout<<x[i]<<endl;
		a+=x[i];
	}
	
	b=a/n;
	cout<<"Nilai rata-rata = "<<b<<endl;
}
