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

	int count = 0;
	rep(num, 10000){
		vector<int> exist(10, 0); //numに0~9がそれぞれ含まれているか
		
		//exist作成
		int x = num;
		rep(i,4){
			exist[x % 10] = 1;
			x /= 10;
		}
		
		//Sとexistを比較していく
		bool ok = true;
		rep(i,10){
			if(exist[i] != 1 && S[i] == 'o') ok = false; //oのものが1つもnumに含まれていないならダメ
			if(exist[i] == 1 && S[i] == 'x') ok = false; //xのものがnumに含まれているならダメ
		}
		
		if(ok) count++;
	}

	cout << count << endl;

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

