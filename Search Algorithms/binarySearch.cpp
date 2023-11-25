#include <iostream>
using namespace std;

int binarySearch(int start, int end, int array[], int ele){
    while(start <= end){
        int mid = start + (end-1)/2;

        if(ele == array[mid]){
            return mid;
        }

        else if(ele > array[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }
    }

    return 0;
}

int main(){

    int n;
    cout << "Enter size of array:" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:" << endl;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to be searched: " << endl;
    cin >> key;

    int result = binarySearch(0, n-1, arr, key);
    (result == 0) ? cout << "Element not found" : cout << "Element found at index " << result; 

    return 0;
}