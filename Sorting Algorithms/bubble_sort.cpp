#include <iostream>
using namespace std;

void bubbleSort(int N, int array[]){
    for(int i=1;i<N;i++){

        // Optimization 2: If no swapping happens after some rounds (when the array gets sorted after a few iterations)
        bool swapped = false;

        // Optimization 1: instead of N-1 use N-i inorder to remove the comparison with last element which is sorted 
        // for(int j=0;j<N-1;j++){

        for(int j=0;j<N-i;j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
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
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    bubbleSort(n, arr);

    printArray(n, arr);

    return 0;
}