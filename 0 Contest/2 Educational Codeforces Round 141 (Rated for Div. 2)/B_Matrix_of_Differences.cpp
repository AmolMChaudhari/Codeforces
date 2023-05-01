#include <bits/stdc++.h>
using namespace std;
// long long int mod = 1e18;

void amol()
{
    int n;
    cin >> n;
    int sq = n * n;
    int arr[50][50];
    arr[0][0] = 1;
    arr[1][0] = sq;
    int k = 2;
      

    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = k;
            k++;
        }
       
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            arr[i][j] = k++;
        }
       
    }

    for (int i = 1; i < 2; i++)
    {
        for (int j = 1; j < n; j++)
        {
            arr[i][j] = k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        amol();
    }
    return 0;
}