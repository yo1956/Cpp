#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
using ll = long long;
#define MOD 1000000007
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n)     for (int i = 1; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = s; i < (int)(n); ++i)
template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す


int main() {

	int n, q;
	cin >> n >> q;
	vector<ll> a(n);
	rep(i,n){
		cin >> a[i];
	}
	vector<ll> k(q);
	rep(i,q){
		cin >> k[i];
	}
	vector<ll> c(n);
	rep(i,n){
		c[i] = a[i] - i - 1;
	}
	
	rep(i,q){
		int r = lower_bound(c.begin(), c.end(), k[i]) - c.begin();
		ll ans = 0;
		if(r == 0)
			ans = k[i];
		else{
			ans = a[r - 1] + k[i] - c[r - 1];
		}
		cout << ans << endl;
	}

	return 0;

}



// aよりもbが大きいならばaをbで更新する
// (更新されたならばtrueを返す)
template <typename T>
bool chmax(T & a, const T & b) {
	if (a < b) {
		a = b;  // aをbで更新
		return true;
	}
	return false;
}
// aよりもbが小さいならばaをbで更新する
// (更新されたならばtrueを返す)
template <typename T>
bool chmin(T& a, const T& b) {
	if (a > b) {
		a = b;  // aをbで更新
		return true;
	}
	return false;
}