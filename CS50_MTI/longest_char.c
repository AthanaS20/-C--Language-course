
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    char *prefix = strs[0];
    for (int i = 1; i < strsSize; i++) {
        for (int j = 0; j < strlen(prefix); j++) {
            printf("prefix[j] = %c, strs[i][j] = %c\n", prefix[j], strs[i][j]);
            if (prefix[j] != strs[i][j]) {
                printf("prefix comum termina em %d\n", j);
                break;
            }
        }
    }

    return prefix;
}

int main() {
    char *strings[] = {"flower", "flow", "flight"};
    int strsSize = sizeof(strings) / sizeof(strings[0]);

    char *prefix = longestCommonPrefix(strings, strsSize);
    printf("prefixo comum: %s\n", prefix);

    return 0;
}