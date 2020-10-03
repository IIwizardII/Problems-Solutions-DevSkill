#include <iostream>
using namespace std;

int main(){

    int t,i,j,k,n;
    long long int sum;
    cin >> t;

    for(i=0;i<t;i++){
        sum=0;
        cin >> n;
        for(j=1;j<=n;j++){
            sum=sum+(j*j*j);
        }
    cout << "Case " << i+1 << ": " << sum << endl;
    }
    return 0;
}
