// 参考
// [1]https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string str;

int main(){

    //----------------------------------------------------------------------------------------------------------//
    //stringの最後の文字を削除
    str.pop_back();
    
    //string中の文字を削除(erase)
    str = "testtest";
    cout << "s1.erase(3) = " << s1.erase(3) << endl; // str == tes
    str = "testtest";
    cout << "s1.erase(3,2) = " << s1.erase(3, 2) << endl; // str == tesest
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
    //----------------------------------------------------------------------------------------------------------//
    
    //----------------------------------------------------------------------------------------------------------//
    //int→char
    // int i = 8;
    //char(i + '0')とするとchar型になる
    // int→stringがやりたければ、to_string関数
    //----------------------------------------------------------------------------------------------------------//
    //charを受け取り大文字ならtrueを返す
    char a;
    bool is_upper = isupper(a);
    //----------------------------------------------------------------------------------------------------------//
    
    //----------------------------------------------------------------------------------------------------------//
    // 文字列の一部を置き換えるreplace関数
    //----------------------------------------------------------------------------------------------------------//
    string str1 = "aaa-bb";
    cout << str1.replace(0,2, "zz") << endl; //zza-bb
    //----------------------------------------------------------------------------------------------------------//
}
