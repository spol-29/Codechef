#nclude<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y,d;
		cin >> x >> y >> d;
		if(max(x,y)-min(x,y) <= d){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
}

