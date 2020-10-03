#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long int n,i,j,k,a,b,c;
    for(i=0;i<t;i++){
        cin >> n;
        k=n*3;
        c=k;
        b=k-1;
        a=k-2;
        if(n%2==0)
            cout << "Case #" << i+1 << ": " << c << " " << b << " " << a << endl;
        else
            cout << "Case #" << i+1 << ": " << a << " " << b << " " << c << endl;
    }
    return 0;
}
