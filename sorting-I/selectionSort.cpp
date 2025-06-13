// -- Insertion sort ---


#include <bits/stdc++.h>
using namespace std;

void insertionSort (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[min] , arr[i]);
    }
}

int main() {
    int arr[] = { 34, 2, 90, 23, 89, 42, 60};

    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}