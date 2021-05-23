#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep_e(i, n)    for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n)     for (int i = 1; i < (int)(n); ++i)
#define rep1_e(i, n)   for (int i = 1; i <= (int)(n); ++i)
#define rep_s(i, s, n) for (int i = s; i < (int)(n); ++i)
#define rep_v(i, v)    for (int i = 0; i < (int)(v.size()); ++i)
#define repll(i, n)    for (ll i = 0; i < (ll)(n); ++i)

template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す


int main() {

	int N;
	cin >> N;

	vector<int> t(N+1);
	vector<int> x(N+1);
	vector<int> y(N+1);
	t[0] = x[0] = y[0] = 0;

	rep(i,N) cin >> t[i+1] >> x[i+1] >> y[i+1];

	bool can = true;
	rep(i,N){
		int dt = t[i+1] - t[i];
		int dist = abs(x[i] - x[i + 1]) + abs(y[i] - y[i + 1]);
		if(dt < dist)
			can = false;

		if(dist % 2 != dt % 2)
			can = false;
	}

	// cout << can ? "Yes" : "No" << endl;
	if(can)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


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