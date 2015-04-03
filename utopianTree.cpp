#include <iostream>
using namespace std;

int height(int n) {
    int treeHeight = 1;
    for (int i = 0; i < n; i++) {
        treeHeight = (i%2 == 0) ? treeHeight*2 : treeHeight+1;
    }
    return treeHeight;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
