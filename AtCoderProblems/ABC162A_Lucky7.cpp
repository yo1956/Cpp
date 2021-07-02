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

	int n;
	cin >> n;

	rep(i,3){
		if(n % 10 == 7){
			cout << "Yes" << endl;
			return 0;
		}
		n /= 10;
	}
	cout << "No" << endl;

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