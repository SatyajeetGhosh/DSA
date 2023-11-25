// Program to insert element at any position in an unsorted array
#include <iostream>
using namespace std;

void insertElement(int size, int array[], int ele, int pos){
    for(int i=size-1;i>=pos;i--){
        array[i+1] = array[i];
    }
    array[pos] = ele;
}

int main(){

    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[20];
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to insert: " << endl;
    cin >> key;

    int position;
    cout << "Enter the position you want to enter your element: " << endl;
    cin >> position;

    insertElement(n, arr, key, position);
    n++;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}