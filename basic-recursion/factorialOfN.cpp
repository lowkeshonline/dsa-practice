#include <iostream>
using namespace std;

//Print factorial of N using Recursion(Parameterised method)

int paramFactOfN(int n , long long fact){
    if(n < 1){
        cout << fact << endl;
        return fact;
    }
    paramFactOfN(n - 1, fact * n);
}

//Print factorial of N using Recursion (Functional Method)

int funcFactOfN(long long n){
    if(n == 0){
        return 1;
    }
    return n * funcFactOfN(n-1);
}


int main(){
    long long n;
    cin >> n;
    paramFactOfN(n , 1);
    cout << funcFactOfN(n) << endl;
    return 0;
}