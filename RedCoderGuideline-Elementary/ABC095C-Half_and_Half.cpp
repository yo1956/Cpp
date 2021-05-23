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

#define MOD 1000000007

template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す


int main() {

	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	int ans1 = c * max(x, y) * 2;
	int ans2 = c * min(x, y) * 2 + (max(x, y) - min(x, y)) * ((x > y) ? a : b);
	int ans3 = a * x + b * y;

	cout << min({ans1, ans2, ans3}) << endl;

	/*   ↓だと1つだけWAするテストケースがあったけどなぜ？ */

	// //組み替えた方が良い場合
	// if(2 * c < a + b){
	// 	if((2 * c < a) || (2 * c < b)){ //さらにこのどちらかの場合は全部ABピザを買えばよい
	// 		cout << c * max(x, y) * 2 << endl;
	// 	}
	// 	else{ //ABピザで補えなかった枚数は買い足す
	// 		cout << c * min(x, y) * 2 + (max(x, y) - min(x, y)) * ((x > y) ? a : b) << endl;
	// 	}
	// }
	// else{ //普通にA,Bピザのみで揃えた方がいい場合
	// 	cout << a * x + b * y << endl;
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