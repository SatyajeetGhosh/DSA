#include <iostream>
using namespace std;

void insertionSort(int N, int array[]){
    int i,j,key;
    for(i=1;i<N;i++){
        key =  array[i];
        j = i-1;
        while(j >=0 && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

void printArray(int N, int array[]){
    for(int i=0;i<N;i++){
        cout << array[i] << " ";
    }
}

int main(){

    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    insertionSort(n, arr);

    printArray(n, arr);

    return 0;
}