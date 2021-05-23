#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
typedef long long ll;
#define MOD 1000000007
#define rep(i, n)      for (int i = 0; i < (int)(n); ++i)
#define rep_e(i, n)    for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n)     for (int i = 1; i < (int)(n); ++i)
#define rep1_e(i, n)   for (int i = 1; i <= (int)(n); ++i)
#define rep_s(i, s, n) for (int i = s; i < (int)(n); ++i)
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
            if(bit & (1 << i))
                sum += a[i];
        }
        
        if(sum == W)
            exist = true;
    }

        //----------------------------------------------------------------------------------------------------------//

        //----------------------------------------------------------------------------------------------------------//
        //グリッド移動系
        const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
    const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

    //----------------------------------------------------------------------------------------------------------//

    
    //----------------------------------------------------------------------------------------------------------//
}