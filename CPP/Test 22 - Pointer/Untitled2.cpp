#include <iostream>
using namespace std;

int search(int* arr,int x,int n){
	for(int i=0; i<n; i++){
		if(x==*(arr + i)){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[]={1,3,5,10};
	int x;
	cin>>x;
	int n=4;
	cout<<search(arr,x,n);
}
