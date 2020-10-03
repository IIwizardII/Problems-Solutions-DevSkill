#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    int x1,x2,y1,y2;
    int i;

    for(i=0;i<t;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << "Case " << i+1 << ": " << (abs(x2-x1)+abs(y2-y1)) << endl;
    }

return 0;
}
