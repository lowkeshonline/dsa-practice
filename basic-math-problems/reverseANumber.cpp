#include <iostream>
using namespace std;

// Example : Input(32524)

// Output : 42523


void reverseANumber(int n){
    //Initiailizing a variable to store reversed digits
    int revNum = 0;
    //iteration until the n value is greater than zero
    while(n > 0){
        //Taking the last digit of n and storing in the variable 
        int lastDigit = n % 10;
        // Updating reverse num multiplied by 10 and adding the stored last digit gives reversed values
        revNum = revNum * 10 + lastDigit;
        //Removing the current reversed last digit from the input value "n"
        n = n / 10;
    }
    //print the final reversed number after all the iterations
    cout << revNum << "\n";
}

int main(){
    int n;
    cin >> n;
    reverseANumber(n);
}