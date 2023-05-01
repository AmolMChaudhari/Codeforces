#include <bits/stdc++.h>
using namespace std;

// void amol()
// {
//     string n;
//     cin >> n;
//     set<char> y;
//     int temp = stoi(n) + 1;

//    for (int j = temp; j <= 9000; j++)
//     {
//         string temp2 = to_string(temp);
//         for (int i = 0; i < 4; i++)
//         {
//             y.insert(temp2[i]);
//         }
//         if (y.size() == 4)
//         {
//             cout << temp2<<endl;
//            // cout<< y.size();
//             break;
//         }

//         temp++;

//     }
// }

void amol()
{
    int n, a, b, c, d;
    cin >> n;
    do
    {
        n++;
        a = n / 1000;
        b = (n / 100) % 10;
        c = (n / 10) % 10;
        d = n % 10;

    }

    while (a == b || a == c || a == d || b == c || b == d || c == d);
    cout << n;
}

int main()
{
    amol();
    return 0;
}