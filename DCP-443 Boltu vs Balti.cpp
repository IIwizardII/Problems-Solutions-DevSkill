#include <iostream>
using namespace std;

int main(){
    long long int t,i,n;
    cin >> t;
    for(i=1;i<=t;i++){
        cin >> n;
        if(n==1 || n==3)
            cout << "Case " << i << "-> YES;\n";
        else
            cout << "Case " << i << "-> NO;\n";
    }
    return 0;
}


