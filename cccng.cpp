#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,a,b,x,y;
	cin >> t;
	while(t--)
		cin >> a >> b >> x >> y;
		if((x*y) >= a*b)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		
}
