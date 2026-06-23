#include <stdio.h>
#include <string.h>

void compressString(char str[]) {
    int n = strlen(str);

    for (int i = 0; i < n; ) {
        char current = str[i];
        int count = 0;

        while (i < n && str[i] == current) {
            count++;
            i++;
        }

        printf("%c%d", current, count);
    }

    printf("\n");
}

int main() {
    char str[] = "aaabbccccd";

    compressString(str);

    return 0;
}