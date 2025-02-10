#include <iostream>
using namespace std;




int main(){
    //Initializing the original string input
    string s;
    cin >> s;

    //Initializing the hash arr
    int arr[256] = {0};
    
    //Traversing through the string
    for(int i = 0; i < s.size(); i++){
        arr[s[i]]++;
    }

    //Output the array
    for(int i = 0; i < 5; i++){
        char c;
        cin >> c;
        cout << arr[c] << endl;
    }
    return 0;
}