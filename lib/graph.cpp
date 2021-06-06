#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

//グラフGにおいて、頂点sを始点とした深さ優先探索を行う
vector<bool> seen; //falseで初期化して使う
void dfs(const Graph &G, int v){
    seen[v] = true;         //vを訪問済みにする

    //vから行ける各頂点next_vについて
    for(auto next_v : G[v]){
        if(seen[next_v])
            continue;       //next_vが探索済みならば探索しない

        dfs(G, next_v);     //再帰的に探索
    }
}