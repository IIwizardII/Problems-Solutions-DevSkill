#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t; cin >> t;

    long long int i,n,m,sum,even,odd,start,check,diff,j;

    for(i=0;i<t;i++){
        cin >> n >> m;

        odd=0; even=0;
        diff=abs(m-n);
        start=n%9;

        for(j=start;j<=diff+start;j++){
            check=j%9;
            if(check==1 || check==4 || check==7)
                even++;
            else
                odd++;
        }

        cout << "Case " << i+1 << ":\n" << "Odd = " << odd << "\nEven = " << even << endl;
    }

    return 0;
}
