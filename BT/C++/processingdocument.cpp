#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main(){
    char list[20001];
    cin >> list;
    char *token ;
    token = strtok(list,".!?");
    
    while(token!=NULL){
        cout << token;
        token = strtok(NULL,".!?");
    }
}