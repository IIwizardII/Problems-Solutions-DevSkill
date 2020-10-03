#include <iostream>
using namespace std;

int main(){

    long long int t,i,a,b;
    cin >> t;

    for(i=0;i<t;i++){
        cin >> a >> b;
        if(b==0){
            cout << ":kick:" << endl;
            continue;
        }


        if((a%b)==0)
            cout << ":wink:\n";
        else
            cout << ":kick:\n";
    }
    return 0;
}
