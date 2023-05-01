#include <bits/stdc++.h>
using namespace std;
 
int amol()
{
    int n;
    int sumx = 0,sumy = 0,sumz = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    } 
    if (sumx == 0 && sumy == 0 && sumz == 0)
    {
        cout << "YES";
    }
    else 
    {
        cout<< "NO";
    }
    return 0;
}
    int main()
    {
        amol();
        return 0;
    }