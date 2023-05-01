#include <bits/stdc++.h>
using namespace std;

void amol()
{

    int n;
    cin >> n;
    int sq = n * n;
    
    for (int i = 0; i < sq/2; i++)
    {
        cout <<i+1 << " " << sq - i << endl;
    }
   
}
int main()
{
    amol();
    return 0;
}