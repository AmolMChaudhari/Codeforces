#include <bits/stdc++.h>
using namespace std;
// long long int mod = 1e18;

void amol()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int temp = 0;
    int flag1 = 0, flag2 = 0, flag = 0;
    int as = n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (m > arr[i])
        {
            flag1++;
        }
        else if (m < arr[i])
        {
            flag2++;
        }
        else if (m == arr[i])
        {
            if (m == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 3;
                temp = i;
            }
        }
    }
    if (flag == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                as--;
            }
        }
    }

    if (flag1 == n)
    {
        cout << 1 << endl;
    }
    else if (flag2 == n)
    {
        cout << n + 1 << endl;
    }
    else if (flag == 3)
    {

        cout << temp + 1 << endl;
    }
    else if (flag == 1)
    {
        cout << as+1 << endl;
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