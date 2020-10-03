#include <iostream>
using namespace std;

class read{
    public:
        char chr[101];

};

int main(){

    int t,row,column,i,j,k,flag;
    read object[101];
    cin >> t;

    for(i=0;i<t;i++){
        flag=false;
        cin >> row >> column;
        for(j=1;j<=row;j++){
            cin >> object[j].chr;
        }

        cout << "Case " << i+1 << ":\n";

        for(j=1;j<=row;j++){
            for(k=0;k<column;k++){
                if(object[j].chr[k]=='$'){
                    cout << j << "," << k+1 << endl;
                    flag=true;
                }
            }
        }
        if(flag==false)
            cout << "No Gold Found" << endl;
    }
    return 0;
}
