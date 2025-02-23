#include <bits/stdc++.h>
using namespace std;

//Selection sort revision

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<=n-1; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=n-1; i++){
        int min = i;
        for(int j = i+1; j<=n-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i=0; i<=n-1; i++){
        cout << arr[i] << " ";
    }
}