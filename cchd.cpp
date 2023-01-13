#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d;
	cin >> n;
	for(int i = 1; i < 10; i++){
		if(n%i == 0){
			d=i;
		}
	}
	cout << d << endl;
}
