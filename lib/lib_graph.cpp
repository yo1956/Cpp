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

//二部グラフ判定
vector<int> color;
bool isBipartite(const Graph &G, int v, int cur = 0){
    color[v] = cur;
    for(auto next_v: G[v]){
        //隣接頂点がすでに色確定していた場合
        if(color[next_v] != -1){
            //同じ色が隣接した場合は二部グラフではない
            if(color[next_v] == cur) return false;
            
            //色が確定した場合には探索しない
            continue;
        }
        //隣接頂点の色を変えて、再帰的に探索
        //falseが返ってきたら、falseを返す
        if(!isBipartite(G, next_v, 1-cur)) return false;
    }
    return true;
}
//使用例------------------------------
// color.assign(N, -1);
// bool is_bipartite = true;
// for (int v = 0; v < N; ++v){
//     if(color[v] != -1) continue; //vが探索済みの場合は探索しない
//     if(!isBipartite(G,v)) is_bipartite = false;
// }
// if(is_bipartite) cout << "Yes" << endl;
// else cout << "No" << endl;
//-------------------------------------

//トポロジカルソート
//vector<bool> seen;
vector<int> order;   //トポロジカルソート順を表す
void topologicalSort(const Graph &G, int v){
    seen[v] = true;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue; //すでに訪問済みなら探索しない
        topologicalSort(G, next_v);
    }
    
    //v-outを記録する
    order.push_back(v);
}
//使用例---------------------------------------------
// seen.assign(N,false); //初期状態では全頂点が未訪問
// order.clear();
// for (int v = 0; v < N; ++v){
//     if(seen[v]) continue; //すでに訪問済みなら探索しない
//     topologicalSort(G, v);
// }
// reverse(order.begin(), order.end());