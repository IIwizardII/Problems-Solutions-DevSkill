#include <iostream>
using namespace std;
#define siz 10010

int main(){

    int t, m, n, h, arr[100000];
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        int chr[siz] = {0};
        for(int j=0; j<n; j++){
            cin >> arr[j];
            chr[arr[j]]++;
        }
        for(int j=0; j<n; j++){
            if(chr[arr[j]]==2){
                cout << arr[j] << endl;
                break;
            }
        }
    }

    return 0;
}
