#include <iostream>

using namespace std;

int main() {
    int N; // The number of rows and columns
    int elem;
    int pd = 0;
    int sd = 0;
    cin >> N;
    for (int i=0; i < N; ++i) {
      for (int j=0; j < N; ++j) {
	cin >> elem;
	if (i == j) {
	  pd += elem;
	} 
	if (i == N - j - 1) {
	  sd += elem;
	}
      }
    }
    if (sd >= pd) {
	cout << sd - pd << endl;
    } else {
	cout << pd - sd << endl;
    }
    return 0;
}
