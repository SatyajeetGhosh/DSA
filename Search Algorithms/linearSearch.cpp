#include <iostream>
using namespace std;

int linearSearch(int size, int array[], int ele){
    for(int i=0;i<size;i++){
        if(ele == array[i]){
            return i;
        }
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:" << endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout << "Enter element to be searched:" << endl;
    cin >> key;

    int result = linearSearch(n, arr, key);
    (result == 0) ? cout << "Element not found" : cout << "Element found at index " << result;

    return 0;
}