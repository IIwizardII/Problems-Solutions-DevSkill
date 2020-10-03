#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t,i,j,len,count;
    char chr[101];
    cin >> t;
    for(i=0;i<t;i++){
        cin >> chr;
        count=0;
        len=strlen(chr);
        for(j=11;j<len;j++){
            if(chr[j]=='+'){
                count++;
            }
        }
     cout << "Happy New Year-" << count+2018 << endl;
    }
    return 0;
}
