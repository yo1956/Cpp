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

	int H, W;
	cin >> H >> W;

	const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
	const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

	vector<string> S(H);
	rep(i,H){
		cin >> S[i];
	}

	rep(i,H){
		rep(j,W){
			int count = 0;
			if(S[i][j] == '#') continue;
			
			rep(d,8){
				int move_x = j + dx[d];
				int move_y = i + dy[d];
				
				if(move_x < 0 || move_x >= W) continue;
				if(move_y < 0 || move_y >= H) continue;
				
				if(S[move_y][move_x] == '#') count++;
			}
			S[i][j] = char('0' + count);
		}
	}

	rep(i,H){
		cout << S[i] << endl;
	}

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