#include<bits/stdc++.h>
using namespace std; 

int main(){ 
    int runs; 
    cin >> runs; 
    while (runs--) { 
        string s; 
        cin >> s; 
        int check = 1;
        for (int i = 0; i < s.size()-1; i++) { 
            if (s[i+1]- s[i]!=1 && s[i]-s[i+1]!=1 ) { 
                check = 0; 
            } 
        } 
        if (check == 0) cout << "NO" << endl; 
        else cout << "YES" << endl;  
    } 
}