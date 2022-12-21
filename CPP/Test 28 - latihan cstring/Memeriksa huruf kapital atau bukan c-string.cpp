#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
    cin>>n;
    char word[n][20];
    char word[n][20];   
    for(int i=0; i<=n; i++){
    	cin.getline(word[i], 20);
    }   
	for(int i=0;i<=n;i++){
    	for(int j=0;j<20;j++){
    		word[i][j]=(char)toupper(word[i][j]);
		}
    }
	for(int k=1; k<=n; k++){
		if(strcmp(word[k],word[k])!=0){
			cout<<"Kecil"<<endl;
		}else{
			cout<<"Besar"<<endl;
		}
	}	
}
