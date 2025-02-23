#include <bits/stdc++.h>
using namespace std;

//Bubble sort revision

int main(){
    int n = 5;
    int arr[n];
    for(int i=0; i<= n-1; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<=n-1; i++){
        bool didSwap = 0;
        for(int j = 0; j<= n-i-1; j++){
            if(arr[j] > arr[j+1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == false){
            break;
        }
    }

    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }
}