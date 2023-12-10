#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pub push_back
#define pob pop_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ll long long
#define ld long double
#define debug(x) cout << #x << "=" << x << endl
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define takeArr(a) for(auto &x : a) cin >> x
#define fork(i,k,n) for (i = k; i < n; i++)
#define forr(i,k,n) for (i = k; i >= n; i--)
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define printA(a,L,R) FE(i,L,R) cout << a[i] << (i==R?'\n':' ')
#define printV(a) printA(a,0,a.size()-1)
#define PI 3.1415926535897932384626
 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<char> vc;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vpii;
typedef vector<vi> vvi;
typedef map<char, int> mci;
typedef map<int, int> mii;
typedef priority_queue<int> pqi;
 
int M = 10e8 + 7;

void printVec(vector<int> v)
{
	for(auto x : v)
	{
		cout << x << " ";
	}
}

inline void solve()
{
	int n, i, j = INT_MIN, f = 0, res = INT_MAX;
	int x;
	cin >> x;
	if(x % 10 >= 5)
	{
		cout << 100 - (10 * ceil((float)x/10));
	}else
	{
		cout << 100 - (10 * floor((float)x/10));
	}
	cout << "\n";
}

signed main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // cout << "**WORKING**\n";
    
	int t;
	cin >> t;
	while(t--) solve();
	// solve();
}
