#include <iostream>
using namespace std;

int height(int n) {
    int treeHeight = 1;
    while(n--) {
        if (n%2) {
            treeHeight *= 2;
        } else {
            treeHeight += 1;
        }
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
