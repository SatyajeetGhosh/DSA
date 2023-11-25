//Program to insert element at the end of an unsorted array
#include <iostream>
using namespace std;

int insertElement(int size, int capacity, int array[], int ele){
    if(size>capacity){
        return size;
    }else{
        array[size] = ele;
        return size + 1;
    }
}

int main(){

    int arr[20];
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    cout << "Enter array elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int cap = sizeof(arr)/sizeof(arr[0]);

    int key;
    cout << "Enter element you want to insert: " << endl;
    cin >> key;

    n = insertElement(n, cap, arr, key);
    cout<< "Printing array after inserting: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}