#include <iostream>
using namespace std;

//数値系
template <typename T> bool chmax(T& a, const T& b); //aよりもbが大きいならばaをbで更新する //更新されたならばtrueを返す
template <typename T> bool chmin(T& a, const T& b); //aよりもbが小さいならばaをbで更新する //更新されたならばtrueを返す
int sum_digit(int n);                               //各桁の和を求める

//文字列系
int ctoi(char c);								    //charからintへの範囲チェック付き変換関数 //数字以外が渡されたなら0を返す

int main(){

}

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
//-----------------------------------------------------------------------------------------------------//

//文字列系
//-----------------------------------------------------------------------------------------------------//
//charからintへの範囲チェック付き変換関数 //数字以外が渡されたなら0を返す
int ctoi(char c) {
	if (c >= '0' && c <= '9') return c - '0';
	return 0;
}



//-----------------------------------------------------------------------------------------------------//