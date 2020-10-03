#include <iostream>
using namespace std;

int main(){
    int t,i,j,x,s;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> x;
        j=0;
        while(x/10!=0){
            x=x/10;
            j++;
        }
        cout << j+1 << endl;
    }
return 0;
}
