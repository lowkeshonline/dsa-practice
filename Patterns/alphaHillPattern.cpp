#include <bits/stdc++.h>
using namespace std;

//Example

//         A     
//       A B A    
//     A B C B A   
//   A B C D C B A  
// A B C D E D C B A 

void alphaHillPattern(int n){
    //Outer loop for no of lines
    for(int i = 1; i <= n; i++){
        //Inner loop for printing left spaces
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        //Initializing char A in variable 
        char ch = 'A';
        //Inner loop for chars in between
        for(int k = 1; k <= 2 * i - 1; k++){
            cout << ch << " ";
            //If condtion to print char backwards when loop exceeds midpoint
            (k <= (2*i-1)/2) ? ch++ : ch--;
        }
        //Inner loop for spaces on right
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
    //Statement for new line break after all inner iterations
    cout << "\n";    
    }
}

int main(){
    int n;
    cin >> n;
    alphaHillPattern(n);
}