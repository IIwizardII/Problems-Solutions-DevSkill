#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){

    char str[21];
    int t;
    cin >> t;
    int i,len,j;
    for(i=0;i<t;i++){
        cin >> str;
        len=strlen(str);
        for(j=0;j<len;j++){
            if(str[j]>=65 && str[j]<=90)
                printf("%c",str[j]+32);
            else
                printf("%c",str[j]-32);
        }
        cout << endl;
    }

return 0;
}
