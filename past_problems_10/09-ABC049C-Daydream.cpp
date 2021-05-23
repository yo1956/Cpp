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

template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す


int main() {

	string S; 
	cin >> S;

	string T = "";
	vector<string> strs{"dream", "dreamer", "erase", "eraser"};

	// if(S[0] != 'e' | S[0] != 'd')
	// 	cout << "NO" << endl;

	reverse(S.begin(), S.end());
	for (int i = 0; i < strs.size(); ++i){
		reverse(strs[i].begin(), strs[i].end());
	}

	// bool can = false;
	for (int i = 0; i < S.size(); ){
		bool can2 = false;
		for (int j = 0; j < strs.size(); ++j){
			if(strs[j] == S.substr(i, strs[j].size())){
				i += strs[j].size();
				can2 = true;
			}
			if(can2 == true)
				break;
		}
		
		if(can2 == false){
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

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