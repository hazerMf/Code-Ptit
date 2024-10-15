#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <fstream>
#include <cctype>
using namespace std;
string a1[201];
string a2[201];

int main()
{
    ifstream input_file;
    input_file.open("DATA1.in");
    int i = 0;
    set<string> s1;
    while (input_file.eof() != true)
    {
        getline(input_file, a1[i]);
        stringstream ss1(a1[i]);
        while (ss1 >> a1[i])
        {
            string tmp = a1[i];
            for (int i = 0; i < tmp.size(); i++)
            {
                tmp[i] = tolower(tmp[i]);
            }
            s1.insert(tmp);
        }
        i++;
    }
    input_file.close();
    i = 0;
    input_file.open("DATA2.in");
    set<string> s2;
    while (input_file.eof() != true)
    {
        getline(input_file, a2[i]);
        stringstream ss2(a2[i]);
        while (ss2 >> a2[i])
        {
            string tmp = a2[i];
            for (int i = 0; i < tmp.size(); i++)
                tmp[i] = tolower(tmp[i]);
            s2.insert(tmp);
        }
        i++;
    }
    input_file.close();
    for (string x : s1)
    {
        if (s2.count(x) == 0)
        {
            cout << x << " ";
        }
    }
    cout << endl;
    for (string x : s2)
    {
        if (s1.count(x) == 0)
        {
            cout << x << " ";
        }
    }
    cout << endl;
    return 0;
}