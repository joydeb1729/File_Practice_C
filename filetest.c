#include <stdio.h>
#include <string.h>

void removeWord(char *str, const char *word) {
    int len = strlen(word); // Length of the word to remove
    char *ptr = str;

    while ((ptr = strstr(ptr, word)) != NULL) {
        memmove(ptr, ptr + len, strlen(ptr + len) + 1); // Shift the remaining characters
    }
}

int main() {
    char str[] = "This is a test string with test word.";
    const char word[] = "test";

    printf("Before: %s\n", str);
    removeWord(str, word);
    printf("After: %s\n", str);

    return 0;
}