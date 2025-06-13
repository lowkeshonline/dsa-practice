// --- Bubble sort ---

#include <bits/stdc++.h>
using namespace std;

void bubbleSort (int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}


int main () {
    int arr[] = {13,46,24,52,20,9};

    int n = sizeof(arr)/sizeof(arr[0]); 

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}