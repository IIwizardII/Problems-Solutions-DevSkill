#include <iostream>
using namespace std;

int main(){
    int t,i,n,j,b;
    long long int sum;
    cin >> t;

    for(i=0;i<t;i++){
        cin >> n;
        b=2;
        sum=0;
        for(j=1;j<n;j++){
            sum=sum+b;
            b=b+4;
        }
        cout << sum << endl;
    }


    return 0;
}
