#include <iostream>
using namespace std;

class Matrix
{
    private:
    int **a;
    int m, n;

    public:
    Matrix(int r, int c)
    {
        m = r;
        n = c;

        a = new int*[m];

        for (int i = 0; i < m; i++)
            a[i] = new int[n];

        cout << "Matrix created" << endl;
    }

    Matrix(const Matrix &x)
    {
        m = x.m;
        n = x.n;

        a = new int*[m];

        for (int i = 0; i < m; i++)
        {
            a[i] = new int[n];

            for (int j = 0; j < n; j++)
                a[i][j] = x.a[i][j];
        }
    }

    void input()
    {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
    }

    void display()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";

            cout << endl;
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < m; i++)
            delete[] a[i];

        delete[] a;
        cout << "Matrix destroyed" << endl;
    }
};

int main()
{
    Matrix m1(2, 2);

    cout << "Enter 4 elements:" << endl;
    m1.input();

    Matrix m2 = m1;

    cout << "Original matrix:" << endl;
    m1.display();

    cout << "Copied matrix:" << endl;
    m2.display();

    return 0;
}