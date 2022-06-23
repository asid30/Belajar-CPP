#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int sec,h,m,s;
    
    cin>>sec;
    
    h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));

    
    cout<<h<<" jam "<<m<<" menit "<<s<<" detik ";

    return 0;
}
