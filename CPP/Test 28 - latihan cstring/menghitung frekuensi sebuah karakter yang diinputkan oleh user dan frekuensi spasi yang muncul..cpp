#include <iostream>
#include <cstring>
using namespace std;

int main (){
    int a,sum=0,space=0;
    char word[50],x;

    cin>>x;
    cin.ignore(256,'\n');
    cin.getline(word, 50, '\n');
    
    for (a=0; true; a++)
        if (word[a]== '.'){
            break;
            
        }else{
            if (word[a] == x || word[a] == x){
				sum++;
                
            }else if(word[a] == ' '){
                space++;
        }
    }
    cout<<sum<<" "<<space;
}
