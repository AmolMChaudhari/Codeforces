#include <bits/stdc++.h>
using namespace std;
long long int mod = 1e18;

void amol()
{

    string s;
    cin >> s;
    int flag = 0;

    for (int i = 0; i < s.size(); i++)
    {

        if ((s[i] == '4') || (s[i] == '7'))
        {
            flag++;
        }
    }
    if (flag == 7 || flag == 4)
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