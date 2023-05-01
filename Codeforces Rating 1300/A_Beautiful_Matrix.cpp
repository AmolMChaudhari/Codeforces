#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int t, k{};
    while (cin >> t && !t)
        k++;
    cout << abs((k / 5)-2)+abs((k % 5) - 2);
}
int main()
{
    amol();
    return 0;
}