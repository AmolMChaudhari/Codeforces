#include <bits/stdc++.h>
using namespace std;
long long int mod = 1e18;

void amol()
{

    int n, a = 0, b = 0, c = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'R')
        {
            a++;
            // cout << "a" << a << endl;
            continue;
        }
        else if (s[i] == 'G' && s[i + 1] == 'G')
        {
            b++;
            // cout << "b" << b << endl;
            continue;
        }
        else if (s[i] == 'B' && s[i + 1] == 'B')
        {
            c++;
            // cout << "c" << c << endl;
            continue;
        }
    }

    if ((a + b + c) != 0)
    {
        cout << a + b + c;
    }
    else
        cout << 0;
}

int main()
{
    amol();
    return 0;
}