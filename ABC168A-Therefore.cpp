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

	int ones_place = n % 10;
	
	if(ones_place == 3)
		cout << "bon" << endl;
	else if(ones_place == 0 | ones_place == 1 | ones_place == 6 | ones_place == 8)
		cout << "pon" << endl;
	else
		cout << "hon" << endl;

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