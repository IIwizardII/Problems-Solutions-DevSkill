#include <iostream>
#include <cstring>
using namespace std;

int main(){
    long long int t,p,i,j,count,len;
    char chr[10001];
    cin >> t;

    for(i=0;i<t;i++){
        cin >> chr;
        cin >> p;

        len=strlen(chr);
        count=0;
        for(j=0;j<p;j++){
            if(chr[j]=='9'){
                count++;
            }
        }
        for(j=0;j<p+count;j++){
            chr[j]='9';
        }
        chr[len]='\0';
        cout << "Case " << i+1 << ": " << chr << endl;
    }

    return 0;
}
