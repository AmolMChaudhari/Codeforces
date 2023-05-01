#include <bits/stdc++.h>
using namespace std;
// long long int mod = 1e18;

void amol()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0, flag = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (arr[0] == arr[n - 1])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        reverse(arr+1, arr+n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout<< endl;
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