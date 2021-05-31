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
	vector<int> a(n);
	vector<vector<pair<int, int>>> xy(n);
	rep(i,n){
		cin >> a[i];
		rep(j, a[i]){
			int x, y;
			cin >> x >> y;
			x--;
			xy[i].push_back(make_pair(x, y));
		}
	}

	int ans = 0;
	rep(bit, (1 << n)){
		bool ok = true;
		int count_honest = 0;
		rep(i, n){
			if(bit & (1 << i)){ //正直者と仮定している人について一人ずつ調べる
				count_honest++;
				rep(j, a[i]){  //正直者と仮定した人の証言を1つずつ調べる
					//正直者と仮定した人が、正直者と仮定されている別の人を不親切な人と言っているならその仮定パターンは矛盾
					//または、正直者と仮定した人が、正直者と言っている人が、正直者でないと仮定されている場合
					if((xy[i][j].second == 0 && (bit & (1 << xy[i][j].first))) || (xy[i][j].second == 1 && !(bit & (1 << xy[i][j].first)))){ 
						ok = false;
						break;
					}
				}
			}
			if(ok == false){
				count_honest = 0;
				break;
			}
		}
		chmax(ans, count_honest);
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