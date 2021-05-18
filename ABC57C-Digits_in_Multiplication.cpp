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

//N=A*Bとする時のA,Bを入れたpairのvectorを返す
vector<pair<ll, ll>> enumDivisorsAB(ll N){
	vector<pair<ll, ll>> res;
    for (ll i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(make_pair(i, N/i));
        }
    }
    return res;
}


int main() {

	ll N;
	cin >> N;

	vector<pair<ll, ll>> AB = enumDivisorsAB(N);

	vector<int> F;
	for (int i = 0; i < AB.size(); ++i){
		int A_digits = numDigits(AB[i].first);
		int B_digits = numDigits(AB[i].second);
		F.push_back(max(A_digits, B_digits));
	}

	int ans = *min_element(F.begin(), F.end());

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