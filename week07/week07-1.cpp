// week07-1.cpp
// ������j �q���t �䤤�ҲĤ��D
// input: 1-9 ���Ʀr
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){
            if(j>1) cout << " ";
            cout << n;
        }
        cout << "�{�b�O��i��, i:" << i;
        cout << endl;
    }
}
