#include <iostream>
#include <vector>
using namespace std;

struct UnionFind{

    //par: 各頂点の親頂点の番号を表す。自身が根の時は-1
    //siz: 各頂点の属する根付き木の頂点数
    vector<int> par, siz;

    //初期化
    UnionFind(int n): par(n, -1), siz(n, 1){}
    
    //根を求める //経路圧縮
    int root(int x){
        if(par[x] == -1)
            return x;                      
        else
            return par[x] = root(par[x]);
    }
    
    //xとyが同じグループに属するかどうか(根が一致するかどうか)
    bool isSame(int x, int y){
        //x,yをそれぞれ根まで移動する
        x = root(x);
        y = root(y);

        //すでに同じグループの時は何もしない
        if(x == y)
            return false;
        
        //union by size(y側のサイズが小さくなるようにする)
        if(siz[x] < siz[y])
            swap(x, y);
        
        //yをxの子とする
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }
    
    //xを含むグループのサイズ
    int size(int x){
        return siz[root(x)];
    }
};