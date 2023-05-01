#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' && s[i+1] == 'b' && s[i+2]=='b' && s.size()>=4)
            {
                cout << s[i] <<" ";
               
            }
            else if (s[i] == 'a' && s[i+1] == 'b' && s.size()>=4)
            {
                cout << s[i] << s[i+1] <<" ";
                i++;
            }
            else if (s[i] == 'b' && s[i+1] =='b' && s[i+2] == 'b')
            {
                cout << s[i]<<" ";
            }
            else if (s[i] == 'b'&& s[i+1]=='a')
            {
                 cout << s[i]<<" ";
            }
            else if (s[i] == 'b')
            {
                 cout << s[i];
            }
            else
            {
                cout << s[i]<< " ";
            }
        }
        cout<< endl;
    }
    return 0;
}