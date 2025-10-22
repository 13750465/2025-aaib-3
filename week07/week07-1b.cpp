// week07-1b.cpp 二合一
// 陽明交大 電機系 其中考第六題
// input: 1-9 的數字
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){
            if(j>1) cout << " ";
            int d = max(abs(i-n), abs(j-n));
            cout << d+1;
        }
        ///cout << "現在是第i樓, i:" << i;
        cout << endl;
    }
}
