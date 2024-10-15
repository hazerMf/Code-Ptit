#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std; 

vector<vector<int> > c;

void find(vector<int> a, vector<int>b) {
    if (a.size() == 0)
    {
        if (b.size() != 0) c.push_back(b);
        return;
    }
    vector<int> d;
    d.push_back(a[0]);
    a.erase(a.begin());
    find(a, b);
    if (b.size() == 0) find(a, d);
    else if (d[0] > b[b.size() - 1])
    {
        b.push_back(d[0]);
        find(a, b);
    }
}

int main() {   
    ifstream input_file;
    input_file.open("SEQUENCE.in");
    int m; 
    input_file >> m;
    vector<int> a;
    vector<int> b;
    int x;
    while (input_file >> x)
    {
        a.push_back(x);
    }
    find(a, b);
    int n = c.size();
    string s[n];
    for (int i=0; i<n; i++)
    {
        s[i] = "";
        if (c[i].size() > 1)
        {
            for (int j=0; j<c[i].size(); j++)
            {
                s[i]+= to_string(c[i][j]) + " ";
            }
        }
    }
    sort(s, s + n);
    for (int i=0; i<n; i++)
    {
        if (s[i] != "") cout << s[i] << endl;
    }
    return 0;
}