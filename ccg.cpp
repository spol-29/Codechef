#include<bits/stdc++.h>
using namespace std;
int main(){
	char a,b;
	int c,d;
	cin >> a >> b;
	if(a == 'G'){
		c = 1;
	}else if(a == 'B'){
		c = 2;
	}else if(a == 'R'){
		c = 3;
	}
	if(b == 'G'){
		d = 1;
	}else if(b == 'B'){
		d = 2;
	}else if(b == 'R'){
		d = 3;
	}
	if(max(c,d) == 3){
		cout << "R" << endl;
	}else if(max(c,d) == 2){
		cout << "B" << endl;
	}else if(max(c,d) == 1){
		cout << "G" << endl;
	}
}
