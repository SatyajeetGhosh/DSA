#include <iostream>
using namespace std;

int insertElement(int size, int array[], int key, int capacity){

    if(size > capacity){
        return size;
    }else{
        int i;
        for(i = size-1;i>=0 && array[i] > key;i--){
            array[i+1] = array[i];
        }
        array[i+1] = key;         
        return size + 1;
    }
    
}

int main(){

    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[20];

    int cap = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to insert: " << endl;
    cin >> key;

    n = insertElement(n, arr, key, cap);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}