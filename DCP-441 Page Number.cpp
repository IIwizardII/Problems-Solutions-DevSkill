#include <iostream>
using namespace std;

int main(){
    int t,i,j,flag,h;
   unsigned long long int n,k,day,sum;
    cin >> t;
    for(i=0;i<t;i++){
        flag=0;
        cin >> n >> k;
        sum=n;
        day=1;
        if(n>=k)
            flag=1;
        while(flag==0){
            n=n*2;
            sum=sum+n;
            day++;
            if(sum>=k){
                flag=1;
            }

        }
        cout << "Case " << i+1 << ": " << day << endl;
    }

    return 0;
}
