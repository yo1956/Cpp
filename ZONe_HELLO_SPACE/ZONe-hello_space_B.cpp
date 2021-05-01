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

	double N, D, h1;
	cin >> N >> D >> h1;

	vector<double> d(N, 0);
	vector<double> h(N, 0);
	double din, hin;
	rep(i, N){
		cin >> din >> hin;
		d[i] = din;
		h[i] = hin;
	}

	

	vector<double> ans(N, 0);
	rep(i, N){
		if(h[i] == h1)
			ans[i] = h[i];
		else if((d[i]*h1)/D >= h[i])
			ans[i] = 0;
		else if(h[i] < h1){
			ans[i] = fabs((d[i] * h1 - D * h[i]) / (D - d[i]));
			//cout << ans << endl;
		}
		else{
			ans[i] = fabs((D * h[i] - h1 * d[i]) / (D - d[i]));
			//cout << ans << endl;
		}	
	}

	double max = *max_element(ans.begin(), ans.end());
	cout << max << endl;

	// double max_h = *max_element(h.begin(), h.end());
	// vector<double>::iterator max_itr = max_element(h.begin(), h.end());
	// size_t maxIndex = distance(h.begin(), max_itr);
	// double max_d = d[maxIndex];

	// double ans = 0;
	// if(max_h == h1)
	// 	cout << max_h << endl;
	// else if((max_d*h1)/D >= max_h)
	// 	cout << 0.0 << endl;
	// else if(max_h < h1){
	// 	ans = fabs((max_d * h1 - D * max_h) / (D - max_d));
	// 	//cout << ans << endl;
	// }
	// else{
	// 	ans = fabs((D * max_h - h1 * max_d) / (D - max_d));
	// 	//cout << ans << endl;
	// }

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