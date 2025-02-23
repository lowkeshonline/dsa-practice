#include <bits/stdc++.h>
using namespace std;

//Insertion sort revision

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin >> arr[i];
    }

    for(int i=1; i<=n-1; i++){
        while(arr[i] < arr[i-1] && i > 0){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            i--;
        }
    }

    for(int i=0; i<=n-1; i++){
        cout << arr[i] << " ";
    }
}