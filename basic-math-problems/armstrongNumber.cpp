#include <iostream>
using namespace std;

void armstrongNumber(int n){
    int duplicate = n;
    int sum = 0;

    while(n > 0){
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    if(duplicate == sum){
        cout << "The given Number is an Armstrong Number \n";
    } else {
        cout << "The given Number is not an Armstrong Number \n";
    }
}

int main(){
    int n;
    cin >> n;
    armstrongNumber(n);
    return 0;
}