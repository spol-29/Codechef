#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,c,h,t;
	cin >> t;
	while(t--){
		cin >> h >> x >> y >> c;
		if(((y/2)*h) + (h*x) <= c){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}		
}

