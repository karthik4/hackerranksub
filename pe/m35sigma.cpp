#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int s(int n) {
    return n*(n+1)/2;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t, n;
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << 3*s((n - (1 * (n%3==0)))/3) + 5*s((n - (1 * (n%5==0)))/5) - 15*s((n - (1 * (n%15==0)))/15) << '\n';
    }
    return 0;
}
