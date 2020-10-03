#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr[101];
    int len,i;
    while(cin >> arr){
        len=strlen(arr);
        for(i=0;i<len-1;i++)
            cout << "9";
        cout << "8";
        for(i=0;i<len-1;i++)
            cout << "0";
        cout << "1";
        cout << endl;
    }
return 0;
}


