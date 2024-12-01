#include <bits/stdc++.h>
using namespace std;

//Example

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

void increasedNumTriangle(int n){
    //initializing num variable with 1 in global scope;
    int num = 1;
    //Outer Loop for printing no.of lines
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    increasedNumTriangle(n);
}