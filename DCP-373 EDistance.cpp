#include <iostream>
using namespace std;

int main(){

    char str[101];
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> str;
        if(str[0]=='-' || str[0]=='0')
            cout << "Case " << i+1 << ": " << str << " is not a valid result" << endl;
        else
            cout << "Case " << i+1 << ": " << str << " is a valid result" << endl;
    }

    return 0;
}
