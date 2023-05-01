#include <bits/stdc++.h>
using namespace std;

void amol()
{
    int n[5][5]={0};  
    
    for (int i = 1;i<=3;i++)
    {
        for (int j = 1;j<=3;j++)
        {
              cin >> n[i][j];
        }
    }
     for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
            cout<< ((n[i][j] + n[i - 1][j] + n[i + 1][j] + n[i][j - 1] + n[i][j + 1]) % 2 ? "0" : "1");
        cout << endl;
    }
     
  
   
}

int main()
{
    amol();
    return 0;
}