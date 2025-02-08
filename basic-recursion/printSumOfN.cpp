#include <iostream>
using namespace std;

//Print the sum of N integers without using Recursion (Parameterised)

int printSumOfN(int n , int sum){
    if(n < 1){
        cout << sum;
        return sum;
    }
    printSumOfN(n-1 , sum + n);
}


int main(){
    int n;
    cin >> n;
    int res = printSumOfN(n , 0);
    return 0;
}