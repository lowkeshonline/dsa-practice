#include <iostream>
using namespace std;

//Check if the Given string is palindrome or not using Recursion

bool checkIfPal(string name ,int i){
    if(i >= name.size()/2){
        return true;
    }
    if(name[i] != name[name.size()-i-1]){
        return false;
    }
    return checkIfPal(name , i+1);
};

int main(){
    cout << checkIfPal("MADAM" , 0) << endl;
    cout << checkIfPal("ARRIA" , 0) << endl;
}