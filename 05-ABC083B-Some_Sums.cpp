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
int ctoi(char c);								    //charからintへの範囲チェック付き変換関数 //数字以外が渡されたなら0を返す
int sum_digit(int n);                               //各桁の和を求める


int main() {
	
	int N,A,B;
	cin >> N >> A >> B;

	int some_sums = 0;
	int calc = 0;

	for (int i = 1; i <= N; ++i){
		calc = sum_digit(i);
		if(calc >= A && calc <= B)
			some_sums += i;
	}

	cout << some_sums << endl;

	//vector<string> x;

	// //1~Nまでの数をstringとして格納
	// rep1_e(i, N){
	// 	x.push_back(to_string(i));
	// }

	// //1文字ずつ数値として取り出して計算
	// int some_sums = 0;
	// int sum = 0;
	// rep(i, N){
	// 	rep_v(j, x){sum += ctoi(x[i][j]);}
	// 	if(sum >= A && sum <= B) some_sums += stoi(x[i]);
	// 	sum = 0;
	// }

	// cout << some_sums << endl;

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

//charからintへの範囲チェック付き変換関数 //数字以外が渡されたなら0を返す
int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

//各桁の和を求める
int sum_digit(int n){
   if(n < 10)  return n;
   return sum_digit(n/10) + n%10;
}