#include <bits/stdc++.h>
using namespace std;

void amol()
{
    string str;
    cin >> str;
    set <char> j;
    for (int i = 0; i<str.length(); i++)
    {
        j.insert(str[i]);
    }
    if ( j.size()%2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}
int main()
{
    amol();
    return 0;
}