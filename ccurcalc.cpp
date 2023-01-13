#include<bits/stdc++.h>
using namespace std;
int main(){
	long double a,b;
	char c;
	cin >> a >> b >> c;
	if(c == '+'){
		cout << a + b << endl;
	}else if(c == '-'){
		cout << a - b << endl;
	}else if(c == '*'){
		cout << a*b << endl;
	}else{
		cout << fixed << a/b << endl;
	}
}
