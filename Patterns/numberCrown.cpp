#include <bits/stdc++.h>
using namespace std;

//Example

//  1    1
//  12  21
//  123321

void numberCrown(int n){
    //Outer loop for printing lines
    for(int i = 1; i <= n; i++){
        //Inner loop for printing the left skewed numbers
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        //Inner loop for printing the spaces in between
        for(int k = 1; k <= 2 * n - (i * 2); k++){
            cout << "  ";
        }
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
    cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    numberCrown(n);
}