#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n;
    cin >> n;
    int arr[n+1];


    for (int i = 1 ; i <= n; i++)
    {
        int  x;
        cin >> x;
        arr[x] = i;
    }
   
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    amol();
    return 0;
}
/*
n - friends
1 - n numbering
i - pi
each received exactly one gift
 some are giving gift to themselves


**************************
solution :

what the number of friend give the gift that index got the for(i) number marking.


*/