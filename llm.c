#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i;
    char str[10004];
    scanf("%d", &t);
    for (i = 0; i < t; ++i) {
        int rev = 0;
        int ndec = 0;
        memset(str, 0x0, sizeof(char) * 10004);
        scanf("%s", str);
        rev = strlen(str);
        for (i = 0, --rev; i < rev; ++i, --rev) {
            if (str[i] != str[rev]) {
                ndec += (str[i] < str[rev]) ? str[rev] - str[i] : str[i] - str[rev];
            }
        }
        printf("%d\n", ndec);
    }
    
    return 0;
}