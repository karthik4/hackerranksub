#include <iostream>

using namespace std;

int main() {
    int T;

    cin >> T;
    for (int i = 0; i < T; ++i) {
    	int N = 0, K = 0, stu = 0;
        cin >> N;
	cin >> K;
	for (int j = 0; j < N; ++j) {
	    int temp;
	    cin >> temp;
	    if (temp <= 0) stu++;
	}
	if (stu >= K) cout << "NO" << endl;
	else cout << "YES" << endl;
    }
    return 0;
}

