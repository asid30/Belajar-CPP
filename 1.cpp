#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int a,b;
	cout<<"Masukan nilai = ";cin>>a;
	
	if(a>0 && a<10){
		for (a=a;a>0;a--){
			for(b=0;b<a;b++){
				cout<<a<<" " ;
			}cout<<"\n";
		}
	}else{
		cout<<"Bilangan tidak sesuai!";
	}
	
    return 0;
}
