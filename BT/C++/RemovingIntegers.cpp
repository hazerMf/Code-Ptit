#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <fstream>
using namespace std;
string a[1001];

int main()
{
    ifstream input_file;
    input_file.open("DATA.in");
    multiset<string> ms;
    int i = 0;
    while (input_file.eof() != true)
    {
        int n;
        getline(input_file, a[i]);
        stringstream ss(a[i]);
        while (ss >> a[i])
        {
            string tmp = a[i];
            if (stringstream(tmp) >> n)
            {
                tmp.erase(0, tmp.size());
            }
            else
            {
                ms.insert(tmp);
            }
            tmp = "";
        }
        i++;
    }
    input_file.close();
    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}