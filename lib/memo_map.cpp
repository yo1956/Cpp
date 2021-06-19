#include <iostream>
#include <map>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
    //--------------------------------------------------------------------
    //mapの走査
    //コメントアウト部分の記述方法はC++17で使える
    map<int, ll> mp;
    int n;
    ll ans = n*(n-1)/2;
    //方法1
	// for(auto&& [a,b]:mp){
	// 	ans -= b * (b - 1) / 2;
	// }
    
    //方法2
    map<int, ll>::iterator itr = mp.begin();
	while(itr != mp.end()){
	 	ans -= itr->second * (itr->second - 1) / 2; //itr->secondで、value値を取得できる //itr->firstで、key値取得
		++itr;
	}
    
    //方法3
    for (auto itr = mp.begin(); itr != mp.end(); itr++){
	 	ans -= itr->second * (itr->second - 1) / 2; //itr->secondで、value値を取得できる //itr->firstで、key値取得
    }

    //方法4
    ll ans = 0;
    vector<int> a(n);
    for(int i=0; i < n; i++) mp[a[i]]++;
    //という感じでaがあった場合
    for (int i = 0; i < n; i++){
        ans += (n - mp[a[i]]);
    }
    //--------------------------------------------------------------------
}
