#include <bits/stdc++.h>
using namespace std;

void amol()
{
    string s;
    cin >> s;
    int n = s.size();
    int a, b, c;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-' && s[i + 1] == '-')
        {
            cout << 2;
            i++;
        }

        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else
        {
            cout << 0;
        }
    }
}
int main()
{
    amol();
    return 0;
}