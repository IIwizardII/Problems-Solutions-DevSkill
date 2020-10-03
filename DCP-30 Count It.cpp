#include <iostream>
#include <cstring>
using namespace std;

class counting{
public:
    char chr;
    int counter;
};

char alpha[101]={"abcdefghijklmnopqrstuvwxyz"};

int main(){
    int t,i,j,k,len;
    counting object[101];

    for(k=0;k<26;k++){
        object[k].chr=alpha[k];
    }
    char arr[101];

    cin >> t;
    for(i=0;i<t;i++){
        for(k=0;k<26;k++){
            object[k].counter=0;
        }
        cin >> arr;
        len=strlen(arr);
        for(j=0;j<len;j++){
            for(k=0;k<26;k++){
                if(arr[j]==object[k].chr){
                    object[k].counter++;
                }
            }
        }
        cout << "Case " << i+1 << ":" << endl;
        for(j=0;j<26;j++){
            if(object[j].counter!=0)
                cout << object[j].chr << " " << object[j].counter << endl;
        }
    }
return 0;
}
