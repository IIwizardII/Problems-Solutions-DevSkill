#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int t,i,x,value,m,even;

    cin >> t;
    for(i=0;i<t;i++){
        cin >> x;
        if(x%2==0)
            even=true;
        else
            even=false;

        value=pow(2,x);
        while(1){
            m=value%10;
            if(value/10==0)
                break;
            value=value/10;
        }
        if(even==true){
            cout << "+" << m << endl;
        }
        else
            cout << "-" << m << endl;
    }
    return 0;
}
