#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char **argv) {
	string S;
	getline(cin, S);
	int flags = 0x0;

	for (string::iterator it = S.begin(); it != S.end(); ++it) {
		if (isalpha(*it)) {
			*it = tolower(*it);
			int bit_pos = *it - 'a';
			flags |= (1 << bit_pos);
		}
	}

	if (flags == (1 << 26)-1) cout << "pangram" << endl;
	else cout << "Not pangram" << endl;
	return 0;
}
