#include <bits/stdc++.h>
using namespace std;

template <typename T> bool chmax(T& a, const T& b); // aよりもbが大きいならばaをbで更新する // 更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); // aよりもbが小さいならばaをbで更新する // 更新されたならばtrueを返す



int main() {
	
	int N;
	vector<int> A;

	cin >> N;

	int input = 0;
	for (int i = 0; i < N; ++i) {
		cin >> input;
		A.push_back(input);
	}

	bool flag = true;
	int cnt = 0;

	while (true) {
		for (auto&& i : A) {
			if (i % 2 == 1) {
				flag = false;
				break;
			}
		}

		if (flag == false) break;

		for (auto&& i : A) i /= 2;

		cnt++;
	}
	
	cout << cnt << endl;
		
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