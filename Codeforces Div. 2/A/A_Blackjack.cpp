#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n, a;

    cin >> n;

    if (n <= 10)
    {
        cout << 0;
    }
    else if ((n > 10 && n < 20 )|| n == 21)
    {

        cout << 4;
    }
    else if (n == 20)
    {
        cout << 15;
    }
    else
        cout << 0;
}

int main()
{
    amol();
    return 0;
}