#include <bits/stdc++.h>

using namespace std;

int amol()
{

    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    for (auto &it : v)
        cin >> it;

    set<int> s;
    for (int i = 1; i <= n * k; i++)
        s.insert(i);

    for (auto it : v)
        s.erase(it);

    for (auto it : v)
    {
        cout << it << " ";
        for (int i = 0; i < n - 1; i++)
            cout << *s.begin() << " ", s.erase(s.begin());

        cout << endl;
    }

    return 0;
}

int main()
{
    amol();
    return 0;
}