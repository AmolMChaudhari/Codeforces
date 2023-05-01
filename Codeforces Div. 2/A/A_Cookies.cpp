#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n;
    int cnt =0;
    int sum =0;
    cin >> n;
    int arr[n];

    for (int i =0; i<n; i++)
    {
        cin>> arr[i];
    
        sum = sum + arr[i];
    }
     for (int i =0; i<n; i++)
     {
        if ((sum - arr[i]) % 2 == 0 ) 
        {
            cnt++;
        }
     }
    cout << cnt;

}
int main()
{
    amol();
    return 0;
}
/*
cookies/bags
steal bag - remain - even bags or 0 
*/