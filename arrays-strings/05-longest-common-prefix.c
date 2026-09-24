#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int n, char result[]) {
    int i, j;

    strcpy(result, strs[0]);

    for (i = 1; i < n; i++) {
        j = 0;

        while (result[j] != '\0' && strs[i][j] != '\0' &&
               result[j] == strs[i][j]) {
            j++;
        }

        result[j] = '\0';
    }
}

int main() {
    // Test case 1: Typical case
    char strs1[][100] = {"flower", "flow", "flight"};
    char result1[100];

    longestCommonPrefix(strs1, 3, result1);
    printf("%s\n", result1);

    // Test case 2: Edge case
    char strs2[][100] = {"dog", "racecar", "car"};
    char result2[100];

    longestCommonPrefix(strs2, 3, result2);
    printf("%s\n", result2);

    return 0;
}