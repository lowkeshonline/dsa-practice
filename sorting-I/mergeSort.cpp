#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> arr, int start, int mid , int end){
    vector<int> temp;
    int i = start;
    int j = mid+1;

    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            i++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i = start; i <= high; i++){
        arr[i] = temp[i - start];
    }

}

void mergeSort(vector<int> &arr, int start , int end){
    if(start >= end){
        return;
    }
    int mid = start + (end - start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start , mid , end);

}


int main(){

    vector<int> arr = {13 , 89, 55, 21, 90, 32};
    mergeSort(arr, 0 , arr.size()-1);
}