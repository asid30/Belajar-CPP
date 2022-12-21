#include <iostream>
#include <cstring>
using namespace std;

int main (){
    char kata [50],huruf;
    int sum=0,sum2=0;
    cin>>huruf;
    cin.ignore(256,'\n');
    cin.getline(kata, 50, '\n');
    for (int i=0; true; i++)
        if (kata[i]== '.'){
            break;
            
        }else{
            if (kata[i] == huruf || kata[i] == huruf){
				sum++;
                
            }else if(kata[i] == ' '){
                sum2++;
        }
    }
    cout<<sum<<" "<< sum2;
}
