#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
using ll = long long;
#define MOD 1000000007
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n)     for (int i = 1; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = s; i < (int)(n); ++i)
template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す


int main() {

	int a, b, c;
	cin >> a >> b >> c;
	
	if(a >= 0 && b >= 0){
		if(a > b)
			cout << ">" << endl;
		else if(a < b)
			cout << "<" << endl;
		else
			cout << "=" << endl;
	}
	else if(a <= 0 && b <= 0){
		if(a > b){
			if(c % 2 == 0){
				cout << "<" << endl;
			}
			else
				cout << ">" << endl;
		}
		else if(a < b){
			if(c % 2 == 0){
				cout << ">" << endl;
			}
			else
				cout << "<" << endl;
		}
		else{
			cout << "=" << endl;
		}
	}
	else if((a >= 0 && b <= 0) || (a <= 0 && b >= 0)){
		if(c % 2 != 0){
			if(a > b){
				cout << ">" << endl;
			}
			else
				cout << "<" << endl;
		}
		else{
			if(abs(a) > abs(b)){
				cout << ">" << endl;
			}
			else if(abs(a) < abs(b)){
				cout << "<" << endl;
			}
			else{
				cout << "=" << endl;
			}
		}
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