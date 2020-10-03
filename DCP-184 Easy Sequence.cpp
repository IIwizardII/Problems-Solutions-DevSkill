#include <iostream>
using namespace std;

int main(){

    int t,n,i,j,a,b,sum,temp;

    cin >> t;
    for(i=0;i<t;i++){
        cin >> n;
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        else if(n==2){
            cout << 3 << endl;
            continue;
        }
        a=1;
        b=3;
        for(j=3;j<=n;j++){
            sum=a+b;
            temp=b;
            b=(a+b);
            a=temp;
        }
        cout << sum << endl;
    }
    return 0;
}
