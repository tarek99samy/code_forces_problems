#include <bits/stdc++.h>
#define       IO 		ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define endl "\n"
#define lop(i, j, n)	for(int i = j; i<n; i++)
#define prl pair<ll,ll>
#define all(x) x.begin(),x.end()
#define sz(x)	((1ll)*(x.size()))
#define srt(x) sort(x.begin(),x.end())
#define BSearch(x,val) binary_search(x.begin(),x.end(),val)
#define pri pair<int,int>
#define EPS 1e-4
#define vll vector<ll>
#define vii vector<int>
#define PI atan(1.0)*4.0
#define sc(x) scanf("%d",&x)
#define infl	100000000
using namespace std;

string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
ll GCD(ll a, ll b) { return((!b) ? a : GCD(b, a%b)); }
ll LCM(ll a, ll b) { return a / (GCD(a, b))*b; }
ll nCr(ll n, ll r) { if (n < r)return 0; if (r == 0)return 1; return n*nCr(n - 1, r - 1) / r; }
ll toDecimal(vll& a, int base, int siz) { ll ans = 0;	for (ll i = siz - 1, x = 1; i >= 0; i--, x *= base) { ans += (a[i] * x); } return ans; }
bool isPrime(ll n) { if (n == 2)return 1; if (n < 2 || n % 2 == 0)return 0; for (ll i = 3; i*i <= n; i += 2)if (n%i == 0)return 0; return 1; }
bool isPalindrome(string str) { ll l = 0; ll h = sz(str) - 1; while (h > l) { if (str[l++] != str[h--]) { return 0; } } return 1; }
bool isEqual(string x, string y) { if (sz(x) != sz(y))return 0; lop(i, 0, sz(x)) { if (x[i] != y[i])return 0; } return 1; }
ll n, m, q,T;

 
 
 
 
int main() {
	IO;
	cin >> n >> m;
	vll a(n);
	lop(i, 0, n)cin >> a[i];
	int i = 0, come = 0, ans = 1;
	while (i<n)
	{
		if (come + a[i] > m) { ans++; come = 0; }
		come += a[i];		i++;
	}
	cout << ans << endl;
	return 0;
}
