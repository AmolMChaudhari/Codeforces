#include <bits/stdc++.h>
using namespace std;

void to_lowercase(char &c)
{
    c = std::tolower(static_cast<unsigned char>(c));
}
void to_uppercase(char &c)
{
    c = std::toupper(static_cast<unsigned char>(c));
}
void amol()
{
    int cnt1 = 0, cnt2 = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    if (cnt1 >= cnt2)
    {
        for_each(s.begin(), s.end(), to_lowercase);
        cout << s;
    }
    else
    {
        for_each(s.begin(), s.end(), to_uppercase);
        cout << s;
    }
}

int main()
{
    amol();
    return 0;
}