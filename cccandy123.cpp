#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		int a,b,bob=0,limak=0,i=0;
		cin >> a >> b;
		while(true){
			i++;
			limak+=i;
			if(limak > a){
				cout << "Bob" << endl;
				break;
			}
			i++;
			bob+=i;
			if(bob > b){
				cout << "Limak" << endl;
				break;
			}
		}
	}
}


