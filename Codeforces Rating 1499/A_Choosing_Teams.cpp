#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n, k;
    int cnt = 0;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {   int yi;
        cin >> yi;
        if (5 - yi >= k) 
        {
            cnt++;
        }
    }
    cout << cnt /3;

}
int main()
{
    amol();
    return 0;
}