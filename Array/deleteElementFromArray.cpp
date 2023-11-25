#include <iostream>
using namespace std;

int linearSearch(int size, int array[], int key){
    for(int i=0;i<size;i++){
        if(array[i] == key){
            return i;
        }
    }
    return 0;
}

void deleteElement(int size, int array[], int index){
    for(int i=index;i<size;i++){
        array[i] = array[i+1];
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

    int key;
    cout << "Enter the element you want to delete: " << endl;
    cin >> key;

    //You can use binary search in case of sorted array to improve time complexity
    int index = linearSearch(n, arr, key);

    if(index == 0){
        cout << "Element not found";
    }else{
        deleteElement(n, arr, index);
        n--;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}