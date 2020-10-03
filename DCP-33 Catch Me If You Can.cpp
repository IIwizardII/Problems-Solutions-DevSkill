#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tc,i,v1,v2,d,r,h,t;
    cin >> tc;
    for(i=0;i<tc;i++){
        cin >> v1 >> v2 >> d >> t;
        r=v1*t;
        h=(v2*t)+d;
        if(r>h || (d==0 && t>0))
            cout << "Case " << i+1 << ": Abir will be arrested\n";
        else
            cout << "Case " << i+1 << ": Abir will survive\n";
    }

return 0;
}
