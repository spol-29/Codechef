#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,o,c;
	cin >> r >> o >> c;
	if((((20-o)*6)+c) > r){
		cout << "yes" << endl;
	}else if((((20-o)*6)+c) <= r) {
		cout << "no" << endl;
	}
}
