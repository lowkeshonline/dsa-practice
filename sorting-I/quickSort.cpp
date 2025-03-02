#include <bits/stdc++.h>
using namespace std;

int findPartIndex(vector<int> &arr , int start, int end){
    int pivot = arr[start];
    int i = start;
    int j = end;
    while(i < j){
        while(arr[i]<= pivot && i < end){
            i++;
        }
        while(arr[j]>pivot && j > start){
            j--;
        }
        if(i < j){
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[start], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int start, int end){
    if(start < end){
        int partIndex = findPartIndex(arr, start, end);
        quickSort(arr, start , partIndex-1);
        quickSort(arr,partIndex+1, end);
    }
}

int main(){
    vector<int> arr = {4 , 6, 2 ,5 , 7,4, 9 , 1 ,3};
    quickSort(arr, 0, arr.size()-1);

    for(int i = 0; i<= arr.size()-1; i++){
        cout << arr[i] << " ";
    }
}