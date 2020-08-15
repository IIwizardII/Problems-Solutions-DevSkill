#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int t, extra, vowel, consnant, len, ans;
    char str[101];
    cin >> t;

    for(int i=0; i<t; i++){

        cin >> str;
        len = strlen(str);

        extra = 0;
        vowel = 0;
        for(int j=0; j<len; j++){
            if(isupper(str[j]) || !isalpha(str[j]))
                extra++;

            if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u')
                vowel++;
        }

        consnant = len-(vowel+extra);
        ans = extra+min(vowel, consnant);

        cout << ans << endl;
    }

    return 0;
}
