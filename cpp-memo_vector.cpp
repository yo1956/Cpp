#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){

    vector<int> vec(100);
    for (size_t i = 0; i < vec.size(); ++i) vec[i] = i;

    //----------------------------------------------------------------------------------------------------------//
    //Vectorの最大値、最小値のイテレータを返す関数 std::max_element, std::min_element //algorithmのインクルードが必要
    //std::distanceと組み合わせるとインデックスも取得できる

    int min = *min_element(vec.begin(), vec.end());
    int max = *max_element(vec.begin(), vec.end());
    vector<int>::iterator minIt = min_element(vec.begin(), vec.end());
    vector<int>::iterator maxIt = max_element(vec.begin(), vec.end());

    // distance で vec の先頭イテレーターと minIt, maxIt との距離を取得する．
    // インデックスを取得したいときは，vec の先頭イテレーターを指定する必要がある．
    // 例えば，vec.begin() + 1 とか指定すると答えは変わる．
    size_t minIndex = std::distance(vec.begin(), minIt);
    size_t maxIndex = std::distance(vec.begin(), maxIt);
    //----------------------------------------------------------------------------------------------------------//

    //----------------------------------------------------------------------------------------------------------//
    //Vectorの要素削除
    //例えば1が入ってる要素を消したい場合
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ){
        if(*it == 1){
            it = vec.erase(it);
            continue;
        }
        it++;
    }
    //----------------------------------------------------------------------------------------------------------//

    //----------------------------------------------------------------------------------------------------------//
    //Vectorの総和 //accumulate //numericのインクルードが必要 //第三引数が和の初期値でそこに加算していき値を返す
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    //----------------------------------------------------------------------------------------------------------//

    //----------------------------------------------------------------------------------------------------------//
    //sort //クイックソート //同じ値同士の順序は維持されない
    sort(vec.begin(), vec.end()); //昇順
    sort(vec.begin(), vec.end(), greater<int>()); //降順

    //----------------------------------------------------------------------------------------------------------//
}

