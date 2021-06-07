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

//グラフGにおいて、頂点sを始点とした深さ優先探索を行う
//|V|=頂点数、|E|=辺数とすると、O(|V|+|E|)
vector<bool> seen; //falseで初期化して使う(seen.assign(N,false);)
void dfs(const Graph &G, int v){
    seen[v] = true;         //vを訪問済みにする

	//vから行ける各頂点next_vについて
    for(auto next_v : G[v]){
        if(seen[next_v])
            continue;       //next_vが探索済みならば探索しない

        dfs(G, next_v);     //再帰的に探索
    }
}

int main() {

	int n, m;
	cin >> n >> m;
	Graph g(n);
	int x, y;
	rep(i,m){
		cin >> x >> y;
		x--;
		y--;
		g[x].push_back(y);
	}

	int ans = 0;
	rep(i,n){
		seen.assign(n, false);
		if(seen[i] == true)
			continue;
			
		dfs(g, i);
		rep(j,n){
			if(seen[j] == true)
				ans++;
		}
	}

	cout << ans << endl;

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