#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float a,b=3.14,c;
    
    cin>>a;
    
    c=b*a*a;
    
    cout<<fixed<<setprecision(2)<<c;
    
    return 0;
}
