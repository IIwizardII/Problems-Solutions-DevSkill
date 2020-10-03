#include <iostream>
using namespace std;

int main(){
     long long int t,i,n,sum;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> n;
        sum=(n*(n+1))/2;
        cout << sum << endl;
    }
    return 0;
}

