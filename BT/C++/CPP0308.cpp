#include <bits/stdc++.h>
using namespace std;

string del(string str) {
    int charCount[256] = {0};
    string result = "";
    for (int i=0; i<str.length(); i++) {
        charCount[str[i]]++;
    }
    for (int i=0; i<str.length(); i++) {
        if (charCount[str[i]] == 1) {
            result += str[i];
        }
    }
    
    return result;
}

int main() {
    
    int runs;
    cin >> runs;
    while(runs--){
        char input[999];
        cin >> input;
        string nonRepeatingString = del(input);
        cout << nonRepeatingString << endl;
    }
}