#include <bits/stdc++.h>
using namespace std;

// example input as five

//  *                 * 
//  * *             * * 
//  * * *         * * * 
//  * * * *     * * * * 
//  * * * * * * * * * * 
//  * * * *     * * * * 
//  * * *         * * * 
//  * *             * * 
//  *                 * 

void symmetricButterfly(int n) {
    // Write your code here.
    // outer loop for Top symmetry
    for(int i = 1; i <= n; i++){
        // Inner loop for left triangle
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        // Inner loop for spaces in between
        for(int k = 1; k <= 2 * n - (i * 2); k++){
            cout << "  ";
        }
        // inner Loop for right triangle
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    // Outer loop for bottom symmetry
    for(int i = 2; i<= n; i++){
        // Inner loop for left triangle
        for(int j = 1; j <= n-i+1; j++){
            cout << "* ";
        }
        // Inner loop for spaces in between
        for(int k = 1; k <= 2 * (i-1); k++){
            cout << "  ";
        }
        // inner Loop for right triangle
        for(int j = 1; j <= n-i+1; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    symmetricButterfly(n);
}