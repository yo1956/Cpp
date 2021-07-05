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

	string s;
	cin >> s;
	
	if(s[2] == s[3] && s[4] == s[5])
		cout << "Yes" << endl;
	else
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