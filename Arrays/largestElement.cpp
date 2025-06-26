
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[] , int size) {
    for ( int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Largest element in an array

// Sorting method

void findLargestBySort (int arr[], int size) {

    sort(arr, arr+size);

    cout << "The largest element of the array is (By sort method) : " << arr[size - 1] << "\n";
}
 
//Recursive method

void findLargestRecursive (int arr[] , int size) {
    int max = 0;

    for (int i = 1; i < size; i++) {
        if(arr[i] > max){
            max = i;
        }
    }

    cout << "The largest element in the array (using recursive method) is : " << arr[max] << "\n";
}

int main() {
    
    int size;
    cin >> size;
    int *arr = new int[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findLargestBySort(arr,size);
    findLargestRecursive(arr,size);

}


