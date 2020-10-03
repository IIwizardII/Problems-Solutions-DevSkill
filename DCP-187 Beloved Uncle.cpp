#include <iostream>
using namespace std;

int main(){

    long long int n,day,temp,a,b,i;

    while(cin >> n){
        if(n==1){
            cout << "Showmic brings " << 1 << " chocolate on " << 1 << "st day." << endl;
            continue;
        }
        else if(n==2){
            cout << "Showmic brings " << 2 << " chocolates on " << 2 << "nd day." << endl;
            continue;
        }
        else if(n==3){
            cout << "Showmic brings " << 3 << " chocolates on " << 3 << "rd day." << endl;
            continue;
        }
        day=3;
        a=2;
        b=3;
        for(i=1;i<=n;i=(a+b)){
            day++;
            temp=b;
            b=(a+b);
            a=temp;

        }
        cout << "Showmic brings " << n << " chocolates on " << day << "th day." << endl;
    }

    return 0;
}
