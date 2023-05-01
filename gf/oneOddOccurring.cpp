#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int arr[5] = {1,1,3,2,2};
    int n = size(arr);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
        cout << res << " /";
    }
    cout << endl;
    cout << (res ) << endl;
}
int main()
{
    amol();
    return 0;
}