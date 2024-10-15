#include <iostream>
#include <cmath>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

char *vietthuong(char a[]){
    for(int i = 0;i<strlen(a);i++){
        if(isupper(a[i])){
            a[i] = tolower(a[i]);
        }
    }
    return a;
}

int main(){
    char in[50];
    cin.getline(in,50);
    vietthuong(in);
    char a[10][100];
    int b=0;
    char *token = strtok(in," ");
    while(token!=NULL){
        strcpy(a[b++],token);
        token = strtok(NULL," ");
    }
    for(int i=0;i<b-1;i++){
        cout << a[i][0];
    }
    cout << a[b-1] << "@ptit.edu.vn";
}