#include <iostream>
using namespace std;
bool flag=true;
int main(){
    int t,i,j,k,len,gang;
    cin >> t;

    for(i=0;i<t;i++){
        cin >> len;
        gang=0;
        char arr[len];
        cin >> arr;
        for(j=0;j<len;j++){
            if(arr[j]=='a' || arr[j]=='o' || arr[j]=='u' || arr[j]=='e' || arr[j]=='i'){
                if(arr[j-1]!='a' && arr[j-1]!='o' && arr[j-1]!='u' && arr[j-1]!='e' && arr[j-1]!='i'){
                    gang++;
                }
            }
        }

        cout << "Case " << i+1 << ": " << gang << endl;
    }



    return 0;
}
