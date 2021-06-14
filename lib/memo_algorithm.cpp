#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
typedef long long ll;
#define MOD 1000000007
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
// #define rep_e(i, n)    for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n)     for (int i = 1; i < (int)(n); ++i)
// #define rep1_e(i, n)   for (int i = 1; i <= (int)(n); ++i)
#define reps(i, s, n) for (int i = s; i < (int)(n); ++i)
#define repll(i, n)    for (ll i = 0; i < (ll)(n); ++i)

// #define rep(i, n)      for (ll i = 0; i < (ll)(n); ++i)
// #define rep_e(i, n)    for (ll i = 0; i <= (ll)(n); ++i)
// #define rep1(i, n)     for (ll i = 1; i < (ll)(n); ++i)
// #define rep1_e(i, n)   for (ll i = 1; i <= (ll)(n); ++i)
// #define rep_s(i, s, n) for (ll i = s; i < (ll)(n); ++i)

using namespace std;

int main(){

    //----------------------------------------------------------------------------------------------------------//
    //bit全探索
    int N, W;
    vector<int> a(N);
    int sum = 0;

    //bitは2^N通りの部分集合を動く
    bool exist = false;
    for (int bit = 0; bit < (1 << N); ++bit){
        int sum = 0; //部分集合に含まれる要素の和
        for (int i = 0; i < N; ++i){
            //i番目の要素a[i]が部分集合に含まれているかどうか
            if(bit & (1 << i)) //if((bit & (1 << i)) == 1)としないように注意
                sum += a[i];
        }
        
        if(sum == W)
            exist = true;
    }

    //----------------------------------------------------------------------------------------------------------//
    //グリッド移動系
    const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
    const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

    //----------------------------------------------------------------------------------------------------------//
    //順列全探索
    vector<int> v(N);
    iota(v.begin(), v.end(), 1);                         // v に 1, 2, ... N を設定
    do {
        for(auto x : v) cout << x << " "; cout << "\n";  // v の要素を表示
    } while( next_permutation(v.begin(), v.end()) );     // 次の順列を生成
    
    //----------------------------------------------------------------------------------------------------------//
    //二分探索
    //std::lower_bound()  指定した要素以上の値が現れる最初の位置のイテレータを取得する。ソート済み配列に対して使うことで二分探索に使える
    int index = lower_bound(v.begin(), v.end(), 3) - v.begin(); //3以上の値が現れる最初の添え字を取得
    //----------------------------------------------------------------------------------------------------------//
}