#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n)     for (int i = 1; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = s; i < (int)(n); ++i)
template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す


int main() {

	int n;
	cin >> n;

	vector<pair<int, int>> town(n);
	rep(i,n){
		cin >> town[i].first >> town[i].second;
	}

	vector<vector<double>> dist(n,vector<double>(n));
	rep(i,n){
		rep(j,n){
			dist[i][j] = sqrt(pow(town[i].first - town[j].first, 2) + pow(town[i].second - town[j].second, 2));
		}
	}

	vector<int> p(n);
	iota(p.begin(), p.end(), 0); //pに0からn-1を設定
	double sum = 0;
	int p_count = 0;
	do{
		rep(i,n-1){
			sum += dist[p[i]][p[i + 1]];
		}
		p_count++;
	} while (next_permutation(p.begin(), p.end()));

	double ans = sum / p_count;
	cout << fixed << setprecision(10) << ans << endl;

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