#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

    freopen("test.txt", "r", stdin);
    int t, c;
    float str[1001];

    cin >> t;

    for(int i=0; i<t; i++){
        cin >> c;
        for(int j=0; j<c; j++){
            cin >> str[j];
        }
        sort(str, str+c);
        for(int j=0; j<c; j++){
            cout << str[j];
            if(j==(c-1))
                continue;
            else
                cout << ",";
        }
        cout << endl;
    }



    return 0;
}
