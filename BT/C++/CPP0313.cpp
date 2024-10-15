#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, word;
    getline(cin, s);
    getline(cin, word);
    size_t pos = s.find(word);
    while (pos != string::npos) { 
        s.erase(pos, word.length()); 
        pos = s.find(word); 
    }
    cout << s << endl;
}