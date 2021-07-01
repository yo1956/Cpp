#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    //----------------------------------------------------------------
    //min()
    cout << min(1, 2) << endl;       //この方式は2つまで
    cout << min({1,2,3,4}) << endl;  //この方式は複数指定可能。変数の比較も可
    //----------------------------------------------------------------
    //小数点以下10桁を表示
    double ans;
    cout << fixed << setprecision(10) << ans << endl;
    
    
}