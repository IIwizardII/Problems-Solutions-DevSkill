#include <iostream>
using namespace std;

int main(){

    char chr[1000001];
    int i,j;

    while(cin >> chr){
        if((chr[0]=='n' && chr[1]=='e' && chr[2]=='v' && chr[3]=='e' && chr[4]=='r') || (chr[0]=='b' && chr[1]=='e')
           || (chr[0]=='s' && chr[1]=='o') || (chr[0]=='h' && chr[1]=='a' && chr[2]=='p' && chr[3]=='p' && chr[4]=='y')
           || (chr[0]=='w' && chr[1]=='h' && chr[2]=='e' && chr[3]=='n') || (chr[0]=='a' && chr[1]=='r' && chr[2]=='e')
           || (chr[0]=='a' && chr[1]=='n' && chr[2]=='d') || (chr[0]=='y' && chr[1]=='o' && chr[2]=='u')
           || (chr[0]=='s' && chr[1]=='a' && chr[2]=='d')
           ){
            cout << "YES" << endl;
           }
        else
            cout << "NO" << endl;
    }

    return 0;
}
//never be so happy when you are and sad
