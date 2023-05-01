#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n, m;
    int flag = 0;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[i][0] == 1) || (arr[i][m - 1] == 1))
            flag = 1;
    }
    for (int i = 0; i < m; i++)
    {
        if ((arr[0][i] == 1) || (arr[n - 1][i] == 1))
            flag = 1;
    }

    if (flag == 1)
    {
        cout << 2;
    }
    else
        cout << 4;
}
int main()
{
    amol();
    return 0;
}