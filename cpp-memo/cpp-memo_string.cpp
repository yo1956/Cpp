#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    //----------------------------------------------------------------------------------------------------------//
    //substr //文字列の一部を取り出す //substr(開始位置、取り出す長さ)
    string str0 = "abcdefghijklmn";
    //str0 = str0.substr(3, 3);
    //cout << str0 << endl; //def
    str0 = str0.substr(5); //取り出す長さを省略すると指定した位置から最後までの文字列を取得
    cout << str0 << endl; //fghijklmn
    //----------------------------------------------------------------------------------------------------------//
    //string→int // stoi(string s)
    //string→long long // stoll(string s)
}