#include <bits/stdc++.h> 
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string N_binary;
        cin >> N_binary;
        int N_decimal = 0;
        int length = N_binary.length();
        for (int j = length - 1; j >= 0; j--) {
            if (N_binary[j] == '1') {
                N_decimal += pow(2, length - j - 1);
            }
        }
        if (N_decimal % 5 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
