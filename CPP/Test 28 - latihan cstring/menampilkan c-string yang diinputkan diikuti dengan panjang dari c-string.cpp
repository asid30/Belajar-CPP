#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    char word[n][20];
    for(int i=0;i<=n;i++){
        cin.getline(word[i], 20,'\n');
    	}	for(int i=1;i<=n;i++){
       		cout<<word[i]<<" "<<strlen(word[i])<<endl;;
    	} 
}
