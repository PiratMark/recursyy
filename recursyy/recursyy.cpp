/*#include <iostream>
#include <random>
#include <chrono>
#include <cstdlib>

using namespace std;// 4 дз 

int min10(int a[100], int n, int& p)
{
    int s = 0;
    for (int i = n; i < n + 10; ++i) s += a[i];
    cout << "n: " << n << "; s: " << s << endl;
    if (100 - n == 10)
    {
        p = n;
        return s;
    }
    else
    {
        int s1 = min10(a, n + 1, p);
        if (s <= s1)
        {
            p = n;
            return s;
        }
        else return s1;
    }
}

int main()
{
    int a[100];
    int p;

    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> rnd(-100, 100);

    for (int i = 0; i < 100; ++i) a[i] = rnd(generator);
    for (int i = 0; i < 100; ++i) cout << a[i] << '\t';
    cout << endl << endl;

    min10(a, 0, p);

    cout << "Minimum position: " << p << endl << endl;
}

*/

/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;// 5 дз

double Max(double* a, int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > max) max = a[i];
    return max;
}

double Max(double** a, int rows, int cols)
{
    int max = a[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] > max) max = a[i][j];
    return max;
}

int main()
{
    srand((int)time(0));

    int k, n, m;

    cout << "array A:\n";
    cout << "k="; cin >> k;
    cout << "array B:\n";
    cout << "n="; cin >> n;
    cout << "m="; cin >> m;

    double* A = new double[k];

    cout << "array A:\n";
    for (int i = 0; i < k; i++)
    {
        A[i] = rand() % 9 + 1;
        cout << A[i] << " ";
    }

    cout << "\nmax=" << Max(A, k) << "\n";

    double** B = new double* [n];
    for (int i = 0; i < n; i++)
        B[i] = new double[m];

    cout << "array B:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            B[i][j] = rand() % 9 + 1;
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "max=" << Max(B, n, m) << "\n";

    delete[]A;
    for (int i = 0; i < n; i++)
        delete[]B[i];
    delete[]B;

    system("pause");
    return 0;
}
*/





