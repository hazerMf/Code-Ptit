#include<bits/stdc++.h>

using namespace std;

void Go(){
    cout << "?";
    fflush(stdin);
    if(cin.get()=='.') exit(0);
}

int Rhythm(float a[], int n){
    int b=0,t=0,g=0;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]) b=1;
        else if(a[i]>a[i-1]) t=1;
        else g = 1;
    }
    //return (4*(n-1-t-b>0) +2*(t>0)+(b>0))%7%6;
    return (4*g + 2*t + b) %7%6;
}

void Print(float a[],int n,const char* msg=""){
    cout << msg;
    for(int i= 0;i<n;i++){
        cout << " " << a[i];
    }
}

void Gen(float a[],int n){
    srand(time(NULL));//random
    for(int i=0;i<n;i++){
        a[i] = rand() % 100;
    }
}

int main(){
    int n=10;
    float a[n];
    Gen(a,n);
    Print(a,n);
    cout << "\n" << Rhythm(a,n);
}