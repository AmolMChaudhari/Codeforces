#include <bits/stdc++.h>
using namespace std;

void amol()
{

    char n;
    set<char> st;

    while (cin >> n)
    {
        if (n == '{' || n == '}' || n == ',')
        {
            continue;
        }
        st.insert(n);
    }
    cout << st.size();
}
int main()
{
    amol();
    return 0;
}