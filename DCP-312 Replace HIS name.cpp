#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int t,i,j,k,len,index,length;
    //char chr[1001];
    string chr;
    cin >> t;
    cin.ignore();
    for(i=0;i<t;i++){
        getline(cin,chr);
        //len=strlen(chr);
        len=chr.length();
        length=len;
        for(j=0;j<len;j++){
            if(!isalpha(chr[j-1]) && chr[j]=='S' && chr[j+1]=='h' && chr[j+2]=='a' && chr[j+3]=='r' && chr[j+4]=='i' && chr[j+5]=='f' && !isalpha(chr[j+6])){
                chr[j]='O';
                chr[j+1]='f';
                chr[j+2]='f';
                chr[j+3]='i';
                chr[j+4]='c';
                chr[j+5]='e';
                index=j+5;
                for(k=length;k>index;k--){
                    chr[k]=chr[k-1];
                }
                chr[index+1]='r';
                length++;
            }
        }
        //chr[length]='\0';
        cout << "Case " << i+1 << ": " << chr << endl;
    }
    return 0;
}
