#include <iostream>
using namespace std;

void reverseArray(int start, int end, int array[]){
    int temp;
    while(start < end){
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}

void printArray(int size, int array[]){
    for(int i=0;i<size;i++){
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

    reverseArray(0, n-1, arr);
    printArray(n, arr);
 
    return 0;
}