#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream input_file("DATA.in");
    long long sum = 0;
    string code;
    while (getline(input_file, code))
    {
        stringstream ss;
        ss << code;
        string tmp;
        int n;
        while (!ss.eof())
        {
            ss >> tmp;
            if (stringstream(tmp) >> n)
            {
                sum += n;
            }
            tmp = "";
        }
    }
    cout << sum << endl;
    input_file.close();
    return 0;
}