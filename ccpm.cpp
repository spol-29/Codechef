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
	int a,b,c,t,am,bm,cm;
	ci am>>bm>>cm>>t>>a>>b>>c;
	if(am<=a&&bm<=b&&cm<=c&&a+b+c>=t){
		co "yes" end
	}else{
		co "no" end
	}
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


