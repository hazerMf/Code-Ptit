#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v1;
    vector<string> v2;
    ifstream datain1("DATA1.in");
    ifstream datain2("DATA2.in");
    ofstream dataout("DATA.out");
    string temp;
    while(datain1 >> temp){
        for(int i=0;i<=temp.length();i++){
            temp[i]=tolower(temp[i]);
        }
        v1.push_back(temp);
    }
    while(datain2 >> temp){
        for(int i=0;i<=temp.length();i++){
            temp[i]=tolower(temp[i]);
        }
        v2.push_back(temp);
    }

    unordered_set<string> u1(v1.begin(), v1.end());
    unordered_set<string> u2(v2.begin(), v2.end());

    unordered_set<string> uhop = u1;
    uhop.insert(v2.begin(), v2.end());
    vector<string> vhop(uhop.begin(), uhop.end());
    sort(vhop.begin(), vhop.end());
    vector<string> vgiao;
    for (auto i : u1) {
        if (u2.find(i) != u2.end()) vgiao.push_back(i);
    }
    for (auto i : vhop) dataout << i << " ";
    dataout << '\n';
    for (auto i : vgiao) dataout << i << " ";

    datain1.close();
    datain2.close();
    dataout.close();
}