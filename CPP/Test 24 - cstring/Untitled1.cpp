#include <iostream>
using namespace std;
int main(){
    int a,b,x;
    cin>>a;
	cin>>b;
	cin>>x;
    int z[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j ++){
            cin>>z[i][j];
            z[i][j]=z[i][j]*x;
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j ++){
            cout<<z[i][j]<<" ";
        }
        cout<<endl;
    }
}
