#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[101];
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i++){
        char temp =tolower(s[i]);
        if((temp=='a')||(temp=='e')||(temp=='i')||(temp=='o')||(temp=='u')||(temp=='y')) continue;
        else{
            cout << "." << temp;
        }
    }
}