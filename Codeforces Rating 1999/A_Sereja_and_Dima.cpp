#include <bits/stdc++.h>
using namespace std;

void amol()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt[2] = {0}, l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        cnt[i % 2] += arr[l] > arr[r] ? arr[l++] : arr[r--];
    }
    cout << cnt[0] << " " << cnt[1];
}
int main()
{
    amol();
    return 0;
}