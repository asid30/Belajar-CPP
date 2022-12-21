#include <iostream>
using namespace std;

void BubbleSort(int* arr, int size);
void swap(int* a, int* b);

int main(int argc, char const *argv[]){
    int arr[7];
    int arrSize = sizeof(arr)/sizeof(*arr);
    for(int m;m<7;m++){
    cin>>arr[m];}

    BubbleSort(arr, arrSize);

    for(int i = 0;i < arrSize;i++){
        cout << arr[i] << " ";
    }
}

void BubbleSort(int* arr, int size){
    bool swapped;
    int indexOfLastUnsortedElement = size;

    do{
        swapped = false;
        for(int i = 0;i < indexOfLastUnsortedElement-1;i++){
            if(*(arr + i) > *(arr + i + 1)){
                swap(*(arr + i), *(arr + i + 1));
                swapped = true;
            }
        }
        indexOfLastUnsortedElement--;
    }while (swapped);
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
