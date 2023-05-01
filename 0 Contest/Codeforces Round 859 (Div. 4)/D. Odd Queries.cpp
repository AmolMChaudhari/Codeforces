#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int t; cin >> t;
  while(t--){
    int n, q; cin >> n >> q;
    vector<ll> a(n), s(n+1);
    for(int i = 0; i < n; i++){
      cin >> a[i]; s[i+1] = s[i] + a[i];
    }
    while(q--){
      int l,r; ll k; cin >> l >> r >> k;
      ll tmp = s[n] - s[r] + s[l-1] + k * (r - l + 1);
      cout << (tmp%2?"YES":"NO") << endl;
    }
  }
}