#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i, n)     for (int i = 0; i < (int)(n); ++i)
#define rep_e(i, n)   for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n)    for (int i = 1; i < (int)(n); ++i)
#define rep2(i, s, n) for (int i = s; i < (int)(n); ++i)
#define repll(i, n)   for (ll i = 0; i < (ll)(n); ++i)

template <typename T> bool chmax(T& a, const T& b); // aよりもbが大きいならばaをbで更新する // 更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); // aよりもbが小さいならばaをbで更新する // 更新されたならばtrueを返す



int main() {
	
	int X,A,B,C;
	cin >> A >> B >> C >> X;
	// cin >> A;
	// cin >> B;
	// cin >> C;
	// cin >> X;
	int cnt=0;

	rep_e(i,A){
		rep_e(j,B){
			rep_e(k,C){
				if(i*500 + j*100 + k*50 == X)
					cnt++;
			}
		}
	}

	cout << cnt << endl;

	// repll(bitA, (bitA << A)){
	// 	repll(bitB, (bitB << B)){
	// 		repll(bitC, (bitC << B)){

	// 		}
	// 	}

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