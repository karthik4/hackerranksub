#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char **argv) {
	string str;
	int len, rot;
	
	cin >> len;
	cin >> str;
	cin >> rot;

	for (string::iterator it = str.begin(); it != str.end(); ++it) {
		if (isalpha(*it)) {
			if (isupper(*it)) {
				*it = (*it + rot - 'A') % 26 + 'A';
			} else if (islower(*it)) {
				*it = (*it + rot - 'a') % 26 + 'a';
			}
		}
	}

	cout << str << endl;
	return 0;
}
