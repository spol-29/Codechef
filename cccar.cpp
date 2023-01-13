#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef map<int, int> mi;
#define pb push_back;
#define mp make_pair;
#define loopaib for (int i = a; i < b; ++i);
#define cl ceil
#define fl floor
#define co cout<< 
#define ci cin>>
#define end  << "\n";

void solve(){
	int x,y,a,b,cp=2;
	ci x >> y >> a >> b;
	if(x == a || x == b){
		cp--;
	}
	if(y == a || y == b){
		cp--;
	}
	co cp end
}

int main(){
    cin.tie(0);
	ios_base::sync_with_stdio(0);
    ll testcase;
    ci testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}

