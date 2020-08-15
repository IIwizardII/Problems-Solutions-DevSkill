#include <iostream>
using namespace std;

int main(){

    int t, b, s, g;

    cin >> t;

    for(int i=0; i<t; i++){
        cin >> b >> s >> g;
        cout << (b*10)+(s*50)+(g*100) << endl;
    }

    return 0;
}
