#include <iostream>
#include <vector>
using namespace std;
class Matrix
{
private:
    int n, m;
    vector<vector<int>> elements;

public:
    Matrix(int rows, int cols)
    {
        n = rows;
        m = cols;
        elements.resize(n, vector<int>(m));
    }

    void fillMatrix()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> elements[i][j];
            }
        }
    }

    void printMatrix()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << elements[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix transpose()
    {
        Matrix t(m, n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                t.elements[j][i] = elements[i][j];
            }
        }
        return t;
    }

    Matrix matrixProduct(Matrix b)
    {
        Matrix c(n, b.m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < b.m; j++)
            {
                int sum = 0;
                for (int k = 0; k < m; k++)
                {
                    sum += elements[i][k] * b.elements[k][j];
                }
                c.elements[i][j] = sum;
            }
        }
        return c;
    }
};

int main()
{
    int test_num_cases;
    cin >> test_num_cases;
    while (test_num_cases--)
    {
        int n, m;
        cin >> n >> m;
        Matrix a(n, m);
        a.fillMatrix();
        Matrix a_t = a.transpose();
        Matrix product = a.matrixProduct(a_t);
        product.printMatrix();
    }
    return 0;
}