#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n, t;
    string s;
    cin >> n >> t >> s;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s;
}
int main()
{
    amol();
    return 0;
}