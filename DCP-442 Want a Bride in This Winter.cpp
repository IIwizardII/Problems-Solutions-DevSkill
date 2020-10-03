#include <iostream>
using namespace std;

int main(){
    int t,n,k,f,count,i,j;
    cin >> t;
    for(i=0;i<t;i++){
        count=0;
        cin >> n >> f;
        k=3;
        for(j=3;j<=n;j=j+k){
            k=k+2;
            count++;
        }
        if(count==f)
            cout << "I am married now" << endl;
        else
            cout << "Baba amar ki biye hobe na" << endl;
    }
return 0;
}
