#include <bits/stdc++.h>
using namespace std;

// Example - input (5)

//  * * * * * * * * * * 
//  * * * *     * * * * 
//  * * *         * * * 
//  * *             * * 
//  *                 * 
//  *                 * 
//  * *             * * 
//  * * *         * * * 
//  * * * *     * * * * 
//  * * * * * * * * * * 

void symmetricVoid(int n){
    //First outer for loop for the top symmetry
    for(int i = 1; i <= n; i++){
        //inner for loop for the left triangle
        for(int j = 1; j <= n -i + 1; j++){
            cout << "* ";
        }
        //Inner for loop for the spaces in btw symmetry
        for(int k = 1; k <= 2 * (i-1); k++){
            cout << "  ";
        }
        //inner for loop for the left triangle
        for(int j = 1; j <= n -i + 1; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    //Second outer for loop for the top symmetry
    for(int i = 1; i <= n; i++){
        //inner for loop for the left triangle
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        //Inner for loop for the spaces in btw symmetry
        for(int k = 1; k <= 2 * n-(i*2); k++){
            cout << "  ";
        }
        //inner for loop for the left triangle
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    symmetricVoid(n);
}