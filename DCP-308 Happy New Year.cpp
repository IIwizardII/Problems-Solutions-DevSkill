#include <iostream>
#include <cstring>
using namespace std;

int value(char n){
    if(n=='0')
        return 0;
    else if(n=='1')
        return 1;
    else if(n=='2')
        return 2;
    else if(n=='3')
        return 3;
    else if(n=='4')
        return 4;
    else if(n=='5')
        return 5;
    else if(n=='6')
        return 6;
    else if(n=='7')
        return 7;
    else if(n=='8')
        return 8;
    else if(n=='9')
        return 9;
}

int main(){
    int t,i,sum,len;
    string chr;
    cin >> t;
    cin.ignore();
    for(i=0;i<t;i++){
        sum=0;
        getline(cin,chr);
        len=chr.length();
        sum=sum*10+value(chr[len-4]);
        sum=sum*10+value(chr[len-3]);
        sum=sum*10+value(chr[len-2]);
        sum=sum*10+value(chr[len-1]);
        if(chr[len-6]=='a'){
            cout << "Shuvo nobo borsho " << sum-650 << endl;
        }
        else{
            cout << "Shuva naya barsha " << sum+650 << endl;
        }
    }
    return 0;
}
