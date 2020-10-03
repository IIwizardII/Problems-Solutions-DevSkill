#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t,i,j;
    long long int n,x,value;
    int flag;

    cin >> t;
    for(i=0;i<t;i++){
        flag=0;
        cin >> n;

        x=2;
        while(flag==0){

            value=pow(n,2);
            cout << endl << value << endl;
            break;

            if(value==5){
                flag=1;
                break;
            }
            x++;
        }

     if(flag==0)
        cout << "NO" << endl;
     else
        cout << "YES" << endl;
     }

    return 0;
}
