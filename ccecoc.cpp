#nclude<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x,c=0;
		cin >> n;
		vector<int> s;
		vector<int> d;
		for(int i = 1; i < n; i++){
			cin >> x;
			s[i] = x;
		}
		for(int j = 1; j < n; j++){
			cin >> x;
			d[j] = x;
			if(d[j] == s[j]){
				c++;
			}
		}
		cout << c << endl;
		c=0;
	}
}

