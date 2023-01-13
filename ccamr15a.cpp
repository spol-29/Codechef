#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	int unlucky=0,lucky=0;
	cin >> t;
	while(t--){
		int p;
		cin >> p;
		if(p%2==0){
			lucky++;
		}else{
			unlucky++;
		}
	}
	if(unlucky >= lucky){
		cout << "NOT READY" << endl;
	}else{
		cout << "READY FOR BATTLE" << endl;
	}
}


