#include <bits/stdc++.h>
using namespace std;

template <typename T> bool chmax(T& a, const T& b); // aよりもbが大きいならばaをbで更新する // 更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); // aよりもbが小さいならばaをbで更新する // 更新されたならばtrueを返す



int main() {
	
	int a, b;
	cin >> a >> b;

	if (a * b % 2 == 0)
		cout << "Even" << endl;
	else
		cout << "Odd" << endl;
	

		
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