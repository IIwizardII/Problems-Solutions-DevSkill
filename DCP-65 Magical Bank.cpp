#include <iostream>
using namespace std;

int main(){
    int i,j,k,t,x,sum;
    cin >> t;
    for(i=0;i<t;i++){
        sum=0;
        j=1;
        cin >> x;
        for(k=1;k<=x;k++){
            if(sum>=x)
                break;
            sum=sum+j;
            j++;
        }
        cout << j-1 << endl;
    }
    return 0;
}
