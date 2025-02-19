#include <bits/stdc++.h>
using namespace std;

//9 4 1 2 8

void insertionSort(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j >= 0 && arr[j-1] > arr[j]){
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    insertionSort(arr,n);
}