#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n, mini, maxi;
    int mintemp = INT_MIN;
    int maxtemp = INT_MAX;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mini = min(maxtemp, arr[i]);
        maxi = max(mintemp, arr[i]);
        maxtemp = mini;
        mintemp = maxi;
    }
    int Left = 0, Right = n;

    while (maxi != arr[Left])
    {
        Left++;
    }
    while (mini != arr[Right])
    {
        Right--;
    }
       //cout << (Left -1) << " " << (n- Right) << " " << (Left > Right) <<endl;
    cout << (Left -1) + (n- Right) -  (Left > Right);
}
int main()
{
    amol();
    return 0;
}