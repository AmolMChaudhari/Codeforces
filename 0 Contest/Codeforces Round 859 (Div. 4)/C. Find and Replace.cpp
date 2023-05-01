#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		bool ans=true, b=true;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j+=2){
				if(s[i]==s[j]){
					ans=false;
					b=false;
					break;
				}
			}
			if(!b)break;
		}
		if(ans)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}