#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n)     for (int i = 1; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = s; i < (int)(n); ++i)
template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す

//桁数を求める
template <typename T>
int numDigits(T num){
	int ans = 0;
	while(num != 0){
		num /= 10;
		ans++;
	}
	return ans;
}

int main() {

	int n;
	string s;
	cin >> n;
	cin >> s;

	int ans = 0;
	rep(i,1000){
		string t;
		int x = i;
		rep(j,3){
			t += '0' + x % 10;
			x /= 10;
		}

		int ti = 0;
		rep(j, s.size()){
			if(t[ti] == s[j])
				ti++;
			
			if(ti == 3){
				ans++;
				break;
			}
		}
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