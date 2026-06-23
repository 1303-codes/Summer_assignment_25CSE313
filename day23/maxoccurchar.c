#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count[256] = {0};
    int max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] > max) {
            max = count[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", max);

    return 0;
}