#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n)     for (int i = 1; i < (int)(n); ++i)
#define reps(i, s, n)  for (int i = s; i < (int)(n); ++i)
template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す


int main() {

	int n, m;
	cin >> n >> m;
	vector<int> k(m);
	// vector<vector<int>> s(m, vector<int>(n));
	vector<vector<int>> s(m);
	rep(i, m){
		cin >> k[i];
		rep(j, k[i]){
			int x;
			cin >> x;
			x--;
			s[i].push_back(x);
		}
	}
	vector<int> p(m);
	rep(i,m){
		cin >> p[i];
	}

	int ans = 0;
	rep(bit, (1 << n))
	{
		int count = 0;
		bool is_on_all = true;
		rep(i, m){ //電球1~mまで1つずつ調べる
			int count_on = 0;
			rep(j, k[i]){ //電球iの繋がっているスイッチのONの数を調べる
				int a = s[i][j];
				if(bit & (1 << a))
					count_on++;
			}
			// if((p[i] == 0 && count_on % 2 == 0) || (p[i] == 1 && count_on % 2 == 1)){
			if(p[i] == count_on % 2){
				continue;
			}
			else{
				is_on_all = false;
				break;
			}
		}
		//is_on_allがtrueのままなら全ての電球が点灯するということ
		if(is_on_all == true)
			ans++;
	}

	cout << ans << endl;

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