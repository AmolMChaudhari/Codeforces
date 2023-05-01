#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n;
    cin >> n;
    int lc = 0, rc = 0;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'L')
            lc++;
        else
            rc++;
    }

    if ((s == "LL") || (s == "RR"))
    {
        cout << -1 << endl;
    }
    else if (s == "LR")
    {
        cout << 1 << endl;
    }
    else if (s == "RL")
    {
        cout << 0 << endl;
    }
    else if (lc > rc)
    {
        cout << lc - rc << endl;
    }
    else if (rc > lc)
    {
        cout << (rc - lc) * 2 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        amol();
    }

    return 0;
}