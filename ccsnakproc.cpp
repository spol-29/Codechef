#include<bits/stdc++.h>
using namespace std;
int main(){
	int r;
	cin >> r;
	while(r--){
		int s,state=0,check=0;
		string snake;
		cin >> s;
		for(int i = 1; i <= s; i++){
			char c;
			cin >> c;
			snake.push_back(c);
		}
		for(int i = 0; i < snake.length(); i++){
			if(snake[i] == '.'){
				continue;
			}else if(snake[i] == 'H'){
				if(state == 0){
					state = 1;
				}else{
					check = 1;
				}
			}else if(snake[i] == 'T'){
				if(state == 1){
					state = 0;
				}else{
					check = 1;
				}
			}
		}
		if(check == 0 && state == 0){
			cout << "Valid" << endl;
		}else{
			cout << "Invalid" << endl;
		}
	}
}

