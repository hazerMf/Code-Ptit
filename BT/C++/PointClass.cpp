#include<iostream>
#include <iomanip>
#include <cmath>
    using namespace std;
class Point
{
public:
    double x, y;
};

int main()
{
    int test_num_cases;
    cin >> test_num_cases;
    while (test_num_cases--)
    {
        Point A, B;
        cin >> A.x >> A.y >> B.x >> B.y;
        cout << fixed << setprecision(4) << sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y)) << endl;
    }
    return 0;
}