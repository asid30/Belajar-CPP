/*
Disusun Oleh: Abdilah Asyidiqi
Kelas: D
NPM: 2117051001
*/

/*
1. membadingkan array[0] dengan array[1]. Jika array[0] lebih besar maka pindahkan nilai array[0] ke array[1] dan sebaliknya. 
2. array[0] terus dibandingkan dengan array selanjutnya yaitu array[2],array[3] dan array[4] hingga array[0] terisi oleh nilai paling kecil. 
3. setelah array[0] selesai dibandingkan dengan semua array maka selanjutnya membandingkan array[1] dengan array[2], array[3], dan array[4] seperti proses sebelumnya hingga array[1] terisi oleh nilai terkecil kedua. 
4. Langkah Langkah diatas dilakukan berulangkali hingga array tersusun.
*/

#include <iostream>
using namespace std;
int main(){
	
	int arr[6],m , n, swap;
	
	for(m = 0; m < 5; m++){
		cin >> arr[m];
	}
	
	for(m = 0; m < 5; m++) {
		for (n = 0; n <= 5; n++){
			if(arr[n] > arr[n+1]){
				swap = arr[n];
				arr[n] = arr[n+1];
				arr[n+1] = swap;
			}
		}
	}
	
	for(m = 0; m < 5; m++){
		cout << arr[m] << " ";
	}
}
