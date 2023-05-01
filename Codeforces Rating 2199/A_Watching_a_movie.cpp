#include <bits/stdc++.h>
using namespace std;

void amol()
{

    int n, x;
    int sum = 0;
    int sum2 = 0;
    int ans = 0;
    int prev_ri = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int li, ri;
        cin >> li >> ri;

        sum = (li - prev_ri - 1) % x;
        sum2 = (ri - li) + 1;
        ans += (sum + sum2);
        prev_ri = ri;
    }

    cout << ans;
}

int main()
{
    amol();
    return 0;
}