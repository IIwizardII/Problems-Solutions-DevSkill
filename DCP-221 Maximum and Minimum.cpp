#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t,i,j,k,n,s,a[1001],max_v,min_v,index_max,index_min;

    cin >> t;
    for(i=0;i<t;i++){

        while((scanf("%d",&n))){
            a[j]=n;
            j++;
            cout << a << endl;
        }
        s=j;
        for(k=0;k<j;k++){
            if(a[k]<=min_v){
                min_v=a[k];
                index_min=k;
            }
        }
        for(k=0;k<j;k++){
            if(a[k]>=max_v){
                max_v=a[k];
                index_max=k;
            }
        }
    cout << "Case " << i+1 << ": Among " << s << " numbers " << a[index_max] << " is maximum and " << a[index_min] << " is minimum" << endl;
    }

    return 0;
}
