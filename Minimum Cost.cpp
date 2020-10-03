#include <iostream>
using namespace std;

int main(){

    long int t,i,j,k,n,x[100001],minimum,index,sum,moves;
    cin >> t;

    for(i=0;i<t;i++){
        cin >> n;
        sum=0;
        for(j=0;j<n;j++){
            cin >> x[j];
        }

        minimum=x[0];
        for(j=0;j<n;j++){
            if(x[j]<=minimum){
                minimum=x[j];
                index=j;
            }
        }
        //cout << "minimum= " << x[index] << endl;

        for(k=0;k<n;k++){
            if(k==index)
                continue;

            moves=x[k]-x[index];
            sum=sum+moves;
        }

        cout << sum << endl;

    }


    return 0;
}

