#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int seen[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (seen[(unsigned char)str[i]]) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
        seen[(unsigned char)str[i]] = 1;
    }

    printf("No repeating character found.\n");

    return 0;
}