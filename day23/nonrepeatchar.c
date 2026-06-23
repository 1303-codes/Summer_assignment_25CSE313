#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < len; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}