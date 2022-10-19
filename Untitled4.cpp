#include <iostream>
using namespace std;

void swap(int* arr, int a, int b){
	int temp;
	temp = *arr[a];
	arr[a] = arr [b];
	arr [b] = temp;
}

void print (int* arr, int n){
	for(int i=0;i<n;i++){
		cout<<*(arr+i)<<" ";
	}
}

int main(){
	int arr[] = {1,2,3,4};
	int n = 4;
	swap(arr, 2, 3);
	print(arr, n);
}
