#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int t,i;
	string chr;
	cin >> t;
    cin.ignore();
	for(i=0;i<t;i++){
		getline(cin,chr);
		if(chr[0]=='E')
			cout << "20\n";
		else if(chr[0]=='M')
			cout << "40\n";
		else if(chr[0]=='H')
			cout << "68\n";
	}
	return 0;
}
