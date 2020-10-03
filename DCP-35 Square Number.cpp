#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int t,i,j,n,r;
    freopen("checker.txt","r",stdin);
    cin >> t;
    for(i=1;i<=t;i++){
        cin >> n;
        r=sqrt(n);
        if(r*r==n)
            cout << "Case " << i << ": " << "YES\n";
        else
            cout << "Case " << i << ": " << "NO\n";
    }

return 0;
}
