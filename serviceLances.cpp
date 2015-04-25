#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
    // Reading from STDIN
    int n, t;
    int freeway[100000];
    cin >> n >> t;
    
    // Read the next n elements into the array
    for (int i = 0; i < n; ++i) 
        cin >> freeway[i];
    
    // Next t test cases follow
    for (int i=0; i < t; ++i) {
        // Read the entry and exit of the sevice lanes
        int start, end;
        cin >> start >> end;
        int min = 3;
        for (int j = start; j <= end; ++j) {
            min = (freeway[j] < min) ? freeway[j] : min;
        }
        cout << min << '\n';
    }
}