#include<bits/stdc++.h>

using namespace std;

void Go(){
    cout << "?";
    fflush(stdin);
    if(cin.get()=='.') exit(0);
}

void Print(int a[],int d,int c,const char *msg =""){
    cout << msg;
    for(int i=d;i<c;i++) cout << a[i] << " ";
}

void Beauty(int h[],int n){
    int p[n+1];
    p[0]=0;
    for(int i=1;i<n;i++){
        p[h[i]] = i; 
    }
    Print(h,1,n,"\n Init h: ");
    Print(p,1,n,"\n p: ");
    int L = p[1], R = p[1];
    int dt=R-L+1;
    int d = 0; //dem doan dep
    for(int v=1;v<=n;v++){
        if(p[v]<L||p[v]>R){ //ngoai cua so, cap nhat
            L = min(L,p[v]);
            R = max(R,p[v]);
            dt = R - L + 1;
        }
        if(dt == v){
            ++d;
            cout << "\n Doan dep No " << d << ". ";
            cout << L << ".." << R;
        }
    }
    cout << "\n Total " << d;
}

int main(){
    int h[] = {0,6,8,2,1,3,5,4,7,9};
    int n = sizeof(h) / sizeof(int) - 1;
    cout << "\n n= " << n;
    Beauty(h,n);
    cout << endl << "The end";
    return 0;
}