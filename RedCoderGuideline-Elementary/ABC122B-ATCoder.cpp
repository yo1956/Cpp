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

	for (int i = 0; i < S.size(); ++i){
		if(S[i] == 'A' | S[i] == 'C' | S[i] == 'G' | S[i] == 'T'){
			break;
		}
		if(i == S.size()-1){
			cout << 0 << endl;
			return 0;
		}
	}


	int count = 0;
	for (int i = 0; i < S.size(); ++i)
	{
		for (int j = 0; j <= S.size() - i; ++j)
		{

			string s_eval = S.substr(i,j);
			// string s_eval2 = s_eval.substr(0,j);
			bool flag = true;
			for (int k = 0; k < s_eval.size(); ++k)
			{
				if (s_eval[k] != 'A' && s_eval[k] != 'C' && s_eval[k] != 'G' && s_eval[k] != 'T')
				{
					flag = false;
					break;
				}
			}
			if(flag == false)
				break;

			chmax(count, (int)s_eval.size());
		}
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