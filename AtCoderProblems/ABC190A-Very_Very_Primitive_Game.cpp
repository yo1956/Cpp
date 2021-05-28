#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n)     for (int i = 1; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = s; i < (int)(n); ++i)
template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す


int main() {

	int a, b, c;
	cin >> a >> b >> c;
	
	if(a == b){
		if(c == 0)
			cout << "Aoki" << endl;
		else
			cout << "Takahashi" << endl;
	}
	else{
		if(a > b)
			cout << "Takahashi" << endl;
		else
			cout << "Aoki" << endl;
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