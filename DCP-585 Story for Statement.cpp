#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int t, counter;
    char str[101], test1[] = "programming", test2[] = "coding";
    bool flag1, flag2;

    cin >> t;

    for(int i=0; i<t; i++){
        flag1 = true;
        flag2 = true;
        cin >> str;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'p')
                counter++;
        }
        if(counter<1)
            flag1 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'r')
                counter++;
        }
        if(counter<2)
            flag1 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'o')
                counter++;
        }
        if(counter<1)
            flag1 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'g')
                counter++;
        }
        if(counter<2)
            flag1 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'a')
                counter++;
        }
        if(counter<1)
            flag1 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'm')
                counter++;
        }
        if(counter<2)
            flag1 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'i')
                counter++;
        }
        if(counter<1)
            flag1 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'n')
                counter++;
        }
        if(counter<1)
            flag1 = false;
        ///***************************************************
        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'c')
                counter++;
        }
        if(counter<1)
            flag2 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'o')
                counter++;
        }
        if(counter<1)
            flag2 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'd')
                counter++;
        }
        if(counter<1)
            flag2 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'i')
                counter++;
        }
        if(counter<1)
            flag2 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'n')
                counter++;
        }
        if(counter<1)
            flag2 = false;

        counter = 0;
        for(int j=0; j<strlen(str); j++){
            if(str[j] == 'g')
                counter++;
        }
        if(counter<1)
            flag2 = false;


        if(flag1==false && flag2==false){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }


    }

    return 0;
}
