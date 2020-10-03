#include <bits/stdc++.h>
using namespace std;
#define siz 10001

int main(){

    unsigned long long int t,n,i,j,k,m,price[siz],miniPrice,indexPrice,maintain[siz],miniMaintain,str[siz],indexMaintain;

    cin >> t;
    for(i=0;i<t;i++){
        cin >> n;
        for(j=0;j<n;j++){
            cin >> price[j] >> maintain[j];
        }
        miniPrice=price[0];
        indexPrice=0;
        for(j=0;j<n;j++){
            if(price[j]<miniPrice){
                miniPrice=price[j];
                indexPrice=j;
            }
            str[j]=1;
        }
        miniMaintain=maintain[indexPrice];
        indexMaintain=indexPrice;
        for(j=0;j<n;j++){
            if(str[j]==0)
               continue;
            for(k=j+1;k<n;k++){
                if(price[j]==price[k] && str[k]==1){
                    m=min(maintain[k],maintain[j]);
                    if(m<miniMaintain){
                        miniMaintain=m;
                        if(maintain[k]<=maintain[j])
                            indexMaintain=k;
                        else
                            indexMaintain=j;
                        str[k]=0;
                    }
                }
            }
        }
        cout << "Case " << i+1 << ": " << price[indexPrice] << " " << maintain[indexMaintain] << endl;
    }

    return 0;
}
