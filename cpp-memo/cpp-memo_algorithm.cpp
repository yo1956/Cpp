#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){

    //----------------------------------------------------------------------------------------------------------//
    //bit全探索



    //----------------------------------------------------------------------------------------------------------//

    //----------------------------------------------------------------------------------------------------------//
    //グリッド移動系
    const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
	  const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

    //----------------------------------------------------------------------------------------------------------//

    //----------------------------------------------------------------------------------------------------------//
    //a^n を p で割った余りを求る
    //繰り返し二乗法
    int modPow(long long a, long long n, long long p) {
      if (n == 0) return 1; // 0乗にも対応する場合
      if (n == 1) return a % p;
      if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p;
      long long t = modPow(a, n / 2, p);
      return (t * t) % p;
    }
    //----------------------------------------------------------------------------------------------------------//

    //----------------------------------------------------------------------------------------------------------//
    //numの階乗を計算する
    int calcFactorial(int num){
      if (num == 0) return 1;
      return num * calcFactorial(num - 1);
    }
    //----------------------------------------------------------------------------------------------------------//
    
}