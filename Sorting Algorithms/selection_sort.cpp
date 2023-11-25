#include <iostream>
using namespace std;

void selectionSort(int N, int array[]){
    for(int i=0;i<N-1;i++){
        int minIndex = i;
        for(int j=i+1;j<N;j++){
            if(array[j] < array[minIndex]){
                minIndex = j;
            }
        }
        swap(array[minIndex], array[i]);
    }
}

void printArray(int N, int array[]){
    for(int i=0;i<N;i++){
        cout << array[i] << " ";
    }
}

int main(){

    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    selectionSort(n, arr);

    printArray(n, arr);

    return 0;
}