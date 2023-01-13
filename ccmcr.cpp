#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef map<int, int> mi;
#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define REP for (int i = a; i < b; ++i);
#define end  << "\n";
#define cl ceil
#define co cout<< 
#define ci cin<<

void solve()
{
	int n;
	cin >>  n;
	if (n%4 == 0)
		co n/4 end
	else
		co(n/4)+1 end;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}
