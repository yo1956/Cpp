#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define MOD 1000000007

//数値系
template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す
int sum_digit(int n);                               //各桁の和を求める
template <typename T> int numDigits(T num); 		//桁数を求める
bool isPrime(ll N);                                 //素数判定 //O(√N)
vector<ll> enumDivisors(ll N);                      //Nの約数を入れたvectorを返す //O(√N)
int numDivisors(ll N);                              //Nの約数の数を返す //O(√N)
int modPow(ll a, ll n, ll p);						//a^n を p で割った余りを求る //繰り返し二乗法
int calcFactorial(int num);							//numの階乗を計算する
ll nCr(ll n, ll r);									//二項係数nCrを求める
vector<pair<ll, ll>> prime_factorize(ll N);         //素因数分解し、(素因数、指数)のpair型のvectorを返す //O(√N)

//文字列系
int ctoi(char c);								    //charからintへの範囲チェック付き変換関数 //数字以外が渡されたなら0を返す

int main(){}

//数値系
//-----------------------------------------------------------------------------------------------------//
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

//各桁の和を求める
int sum_digit(int n){
   if(n < 10)  return n;
   return sum_digit(n/10) + n%10;
}

//桁数を求める
template <typename T>
int numDigits(T num){
	int ans = 0;
	while(num != 0){
		num /= 10;
		ans++;
	}
	return ans;
}

//素数判定 //計算量はO(√N)
bool isPrime(ll N){
	if (N == 1) return false;
    for (ll i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

//Nの約数を入れたvectorを返す
vector<ll> enumDivisors(ll N){
	vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

//Nの約数の数を返す
int numDivisors(ll N){
	int count = 0;
	for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
			count++;
			if (N / i != i) count++; // 重複しないならば i の相方である N/i も 数える
		}
    }
    return count;
}

//a^n を p で割った余りを求る
//繰り返し二乗法
int modPow(long long a, long long n, long long p)
{
	if (n == 0)
		return 1; // 0乗にも対応する場合
	if (n == 1)
		return a % p;
	if (n % 2 == 1)
		return (a * modPow(a, n - 1, p)) % p;
	long long t = modPow(a, n / 2, p);
	return (t * t) % p;
}

//numの階乗を計算する
int calcFactorial(int num)
{
	if (num == 0)
		return 1;
	return num * calcFactorial(num - 1);
}

//二項係数nCrを求める
ll nCr(ll n, ll r)
{
	vector<ll> fac, finv, inv;
	fac.resize(n + 1);
	finv.resize(n + 1);
	inv.resize(n + 1);
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (ll i = 2; i <= ll(n); i++)
	{
		fac[i] = fac[i - 1] * i % MOD;
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}

	if (n < r)
		return 0;
	if (n < 0 || r < 0)
		return 0;
	return fac[n] * (finv[r] * finv[n - r] % MOD) % MOD;
}

//素因数分解し、(素因数、指数)のpair型のvectorを返す //O(√N)
vector<pair<ll, ll> > prime_factorize(ll N) {
    vector<pair<ll, ll> > res;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}
//-----------------------------------------------------------------------------------------------------//

//文字列系
//-----------------------------------------------------------------------------------------------------//
//charからintへの範囲チェック付き変換関数 //数字以外が渡されたなら0を返す
//intからcharへする場合は'0'にその1桁の数を足す
int ctoi(char c) {
	if (c >= '0' && c <= '9') return c - '0';
	return 0;
}

//-----------------------------------------------------------------------------------------------------//