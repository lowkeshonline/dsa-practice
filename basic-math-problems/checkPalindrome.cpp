#include <iostream>
using namespace std;

void checkPalindrome(int n){
    int revNum = 0;
    int palindrome = n;

    while (n > 0){
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n/10;
    }

    if(revNum == palindrome){
        cout << "The given number " << palindrome << " is a palindrome." << "\n";
    } else {
        cout << "The given number " << palindrome << " is not a palindrome" << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    checkPalindrome(n);
    return 0;
}