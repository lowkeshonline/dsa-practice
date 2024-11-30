#include <bits/stdc++.h>
using namespace std;

void halfDiamondTriangle(int n){
    //Loop for the outer lines
    for(int i = 1; i <= 2 * n - 1; i++){
        //Printing stars acc to i until it reaches N value
        int star = i;
        //If i exceeds N value update star value in reverse order
        if(i > n){
            star = 2 * n -i;
        }
        //Loop for printing star values.
        for(int j = 1; j <= star; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    halfDiamondTriangle(n);
}