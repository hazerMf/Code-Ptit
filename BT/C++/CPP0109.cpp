#include<bits/stdc++.h> 
using namespace std; 
int kt(int n){ 
    int demc =0; 
    int deml =0; 
    while(n>0){ 
        if((n%10)%2==0){ 
            demc++; 
        }else{ 
            deml++ ; 
        } 
        n/=10; 
    } 
    if(demc == deml) return 1 ; 
    else return 0; 
} 

int main (){ 
    int dem =0; 
    int a; cin >>a; 
    for(int i =pow(10,a-1);i<pow(10,a);i++){ 
        if(kt(i)){ 
            cout << i <<" "; 
            dem++ ; 
        } 
        if(dem%10 ==0){ 
            cout <<endl ;
        } 
    } 
}