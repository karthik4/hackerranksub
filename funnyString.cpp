#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char ** argv) {
	int T;

	cin >> T;
	for (int i = 0; i < T; ++i) {
		string S, R;
		cin >> S;
		bool funny = true;
		for (string::iterator it = S.end(); it !=S.begin(); it--) R.push_back(*it);
		for (string::iterator it = S.begin(), it2 = R.begin() ; it != S.end() && it2 != R.end(); ++it, ++it2) {
			if (it == S.begin()) continue;
			if (abs(*it - *(it - 1)) != abs(*it2 - *(it2 - 1))) {
				funny = false;
				break;
			}
		}
		if (funny) cout << "Funny" << endl;
		else cout << "Not Funny" << endl;
	}
	return 0;
}
