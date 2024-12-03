#include <bits/stdc++.h>
using namespace std;

//Example input as five

//   *****
//   *   *
//   *   *
//   *   *
//   *****

void hollowRectangle(int n){
    // outer Loop for the number of lines
    for(int i = 1; i <= n; i++){
        //Inner loop for the star and spaces 
        for(int j = 1; j <= n; j++){
            // if value of i and j == (1,n) or (n,1) print * or else print space
            if(i == 1 && n || i == n && 1 || j == 1 && n || j == n && 1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    hollowRectangle(n);
}