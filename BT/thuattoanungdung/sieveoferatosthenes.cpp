#include<bits/stdc++.h>

using namespace std;
const int MN = 1000000;
typedef bitset<MN+1> BS;
BS e;
const int pow[] = {1,10,100,1000,10000,100000,1000000};

void Sieve(int n){
    BS e;
    e.set();
    e[0]=e[1]=0;
    for(int i=4;i<=n;i++) e[i]=0;
    int sn = (int) sqrt(n);
    for(int i=3;i<=sn;i+=2){
        if(e[i]){
            for(int j=i*i;j<n;j+=i){
                e[j] = 0;
            }
        }
    }
    return e;
}

bool AllRotate(int p){

}

void CircularPrime(int n){
    Sieve(n);
    //for(int i=1;i<100;++i) if(e[i]) cout << " " << i;
    int d = 1;
    cout << endl << "2";
    for(int i=3;i<10;i+=2){
        if(e[i]){
            d++;
            cout << "\n " << i;
        }
    }
    for(int i=11;i<n;i+=2){
        if(e[i]){
            if(AllRotate(i)){
                d++;
                cout << "\n " << i;
            }
        }
    }
}

int main(){
    CircularPrime(MN);
}