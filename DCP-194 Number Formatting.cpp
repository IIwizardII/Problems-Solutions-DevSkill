#include <iostream>
using namespace std;

int main(){
    int t,i,j,len;
    char chr[21];
    cin >> t;
    for(i=0;i<t;i++){
        cin >> chr;
        if(chr[0]=='8' && chr[1]=='8'){
            if(chr[3]=='1' && chr[4]=='1')
                cout << chr << " " << "Citycell" << endl;
            else if(chr[3]=='1' && chr[4]=='5')
                cout << chr << " " << "Teletalk" << endl;
            else if(chr[3]=='1' && chr[4]=='6')
                cout << chr << " " << "Airtel" << endl;
            else if(chr[3]=='1' && chr[4]=='7')
                cout << chr << " " << "Grameenphone" << endl;
            else if(chr[3]=='1' && chr[4]=='8')
                cout << chr << " " << "Robi" << endl;
            else if(chr[3]=='1' && chr[4]=='9')
                cout << chr << " " << "Banglalink" << endl;
        }
        else{
             if(chr[1]=='1' && chr[2]=='1')
                cout << "88" << chr << " " << "Citycell" << endl;
            else if(chr[1]=='1' && chr[2]=='5')
                cout << "88" << chr << " " << "Teletalk" << endl;
            else if(chr[1]=='1' && chr[2]=='6')
                cout << "88" << chr << " " << "Airtel" << endl;
            else if(chr[1]=='1' && chr[2]=='7')
                cout << "88" << chr << " " << "Grameenphone" << endl;
            else if(chr[1]=='1' && chr[2]=='8')
                cout << "88" << chr << " " << "Robi" << endl;
            else if(chr[1]=='1' && chr[2]=='9')
                cout << "88" << chr << " " << "Banglalink" << endl;
        }
    }

    return 0;
}
