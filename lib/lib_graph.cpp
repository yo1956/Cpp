#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

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

//in : グラフGと、探索の始点s
//out: sから各頂点への最短路長を表す配列
//|V|=頂点数、|E|=辺数とすると、O(|V|+|E|)
vector<int> BFS(const Graph &G, int s){
    int N = (int)G.size();   //頂点数
    vector<int> dist(N, -1); //全頂点を未訪問に初期化
    queue<int> que;
    
    //初期条件(頂点0を初期頂点とする)
    dist[0] = 0;
    que.push(0);
    
    //BFS開始(キューが空になるまで探索を行う)
    while(!que.empty()){
        int v = que.front(); //キューから先頭頂点を取り出す
        que.pop();
        
        //vからたどれる頂点をすべて調べる
        for(int x: G[v]){
            //すでに発見済みの頂点は探索しない
            if(dist[x] != -1)
                continue;
            
            //新たな未発見頂点xについて距離情報を更新してキューに挿入
            dist[x] = dist[v] + 1;
            que.push(x);
        }
    }

    return dist;
}