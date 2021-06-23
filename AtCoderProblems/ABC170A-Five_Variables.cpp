#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
using ll = long long;
#define MOD 1000000007
#define rep(i, n)     for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n)    for (int i = 1; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = s; i < (int)(n); ++i)
template <typename T> bool chmax(T& a, const T& b); 
template <typename T> bool chmin(T& a, const T& b);


int main() {
	int x1, x2, x3, x4, x5;
	cin >> x1 >> x2 >> x3 >> x4 >> x5;

	if(x1 == 0) cout << 1 << endl;
	if(x2 == 0) cout << 2 << endl;
	if(x3 == 0) cout << 3 << endl;
	if(x4 == 0) cout << 4 << endl;
	if(x5 == 0) cout << 5 << endl;

	return 0;

}

template <typename T>
bool chmax(T & a, const T & b) {
	if (a < b) {
		a = b;  // aをbで更新
		return true;
	}
	return false;
}
template <typename T>
bool chmin(T& a, const T& b) {
	if (a > b) {
		a = b;  // aをbで更新
		return true;
	}
	return false;
}