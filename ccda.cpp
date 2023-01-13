#nclude<bits/stdc++.h>
using namespace std;
int main(){
	int t,k,c=0;
	cin >> t;
	while(t--){
		cin >> k;
		for(int i = 1; i <= k; i++){
			if(i % 2 != 0){
				c+=3;
			}else{
				c--;
			}
		}
		cout << c << endl;
		c=0;
	}
}

