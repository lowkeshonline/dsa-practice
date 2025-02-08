#include <iostream>
using namespace std;

//Print the sum of N integers without using Recursion (Parameterised)

int parameterSumOfN(int n , int sum){
    if(n < 1){
        cout << sum << endl;
        return sum;
    }
    parameterSumOfN(n-1 , sum + n);
}

//print the sum of N integers without using Recursion (Functional)

int funcSumOfN(int n){
    if(n == 0){
        return 0;
    }
    return n + funcSumOfN(n -1);
}


int main(){
    int n;
    cin >> n;
    parameterSumOfN(n , 0);
    cout << funcSumOfN(n) << endl;
    return 0;
}