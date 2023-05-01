#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n;
    cin >> n;
    set<char> s;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;

        s.insert(tolower(c));
    }
    if (s.size() >= 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    amol();
    return 0;
}