#include <bits/stdc++.h>
using namespace std;

// Example : Input (6068787)

// Output : 7

void countDigits(int n){
    //Initializing an counter variable
    int count = 0;
    //Iterate until n becomes the value less than or equals to 0
    while(n > 0){
        // divide the n with 10 and assign it to n so that the last digit can be removed
        n = n / 10;
        //increment the counter everytime a digit gets removed
        count++;
    }
    //print the number of digits removed before the n becomes 0
    cout << count << "\n";
}

int main(){
    int n;
    cin >> n;
    countDigits(n);
}