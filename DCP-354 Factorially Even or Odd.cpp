#include <iostream>
using namespace std;

int main(){
    int t;
    long long int n,i;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> n;
        if(n>4)
            cout << "Even\n";
        else
            cout << "Odd\n";
    }
return 0;
}



