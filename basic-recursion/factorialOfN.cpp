#include <iostream>
using namespace std;

//Print factorial of N using Recursion(Parameterised method)

int paramFactOfN(int n , int fact){
    if(n < 1){
        cout << fact << endl;
        return fact;
    }
    paramFactOfN(n - 1, fact * n);
}


int main(){
    int n;
    cin >> n;
    paramFactOfN(n , 1);
    
    return 0;
}