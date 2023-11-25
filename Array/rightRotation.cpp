#include <iostream>
using namespace std;

void rotateArray(int size, int array[], int times){
    int i = 1;
    while(i<=times){
        int temp = array[size-1];
        for(int j=size-1;j>0;j--){
            array[j] = array[j-1];
        }
        array[0] = temp;
        i++;
    }
}

void printArray(int size, int array[]){
    for(int i=0;i<size;i++){
        cout << array[i] << " ";
    }
}

int main(){

    int n;
    cout << "Enter size of Array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int noOfTimes;
    cout << "Enter number of times you want to rotate the array: " << endl;
    cin >> noOfTimes;

    rotateArray(n, arr, noOfTimes);

    printArray(n, arr);

    return 0;
}