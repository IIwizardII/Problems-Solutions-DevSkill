#include <iostream>
using namespace std;

int main(){

    int t,i;
    long long int n;

    cin >> t;
    for(i=0;i<t;i++){
        cin >> n;
        if(n%2==0)
            cout << "1\n";

        else
            cout << "9\n";
    }
    return 0;
}
