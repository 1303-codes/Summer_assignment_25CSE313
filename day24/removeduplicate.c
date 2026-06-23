#include <stdio.h>

void removeDuplicates(char str[]) {
    int visited[256] = {0};
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (!visited[(unsigned char)str[i]]) {
            visited[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main() {
    char str[] = "programming";

    removeDuplicates(str);

    printf("After removing duplicates: %s\n", str);

    return 0;
}