#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y;
		cin >> x >> y;
		if(y*10 < x*100){
			cout << "Cloth" << endl;
		}else if(x*100 < y*10){
			cout << "Disposable" << endl;
		}else{
			cout << "Cloth" << endl;
		}
	}
}


