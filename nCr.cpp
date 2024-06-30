#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    int ans = 1;
    if (r > n / 2)
    {
        r = n - r;
    }
    for (int i = 1; i <= r; i++)
    {
        ans *= n - i + 1;
        ans/=i;
    }
    return ans;
}

int main()
{
    cout << nCr(6, 0) << endl;
    cout << nCr(6, 1) << endl;
    cout << nCr(6, 2) << endl;
    cout << nCr(6, 3) << endl;
    cout << nCr(6, 4) << endl;
    cout << nCr(6, 5) << endl;
    cout << nCr(6, 6) << endl;

}