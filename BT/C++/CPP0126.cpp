#include <bits/stdc++.h> 
using namespace std; 

int nt(int a){
    if(a<=1) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){ 
    int runs; 
    cin >> runs; 
    while(runs--){ 
        int a,b;
        cin >> a >> b;
        for(int i=a;i<=b;i++){
            if(nt(i)) cout << i << " ";
        }
        cout << endl;
    } 
    
}