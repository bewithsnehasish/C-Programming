#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    int len;

    // strlen: get the length of a string
    strcpy(str1, "Hello, World!");
    len = strlen(str1);
    printf("Length of str1: %d\n", len);

    // strcpy: copy one string to another
    strcpy(str2, "Goodbye, World!");
    strcpy(str1, str2);
    printf("str1 after copying str2: %s\n", str1);

    // strcat: concatenate two strings
    strcpy(str2, "Hello, ");
    strcat(str2, "World!");
    printf("str2 after concatenation: %s\n", str2);

    // strcmp: compare two strings
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    // strncmp: compare two strings up to a certain number of characters
    if (strncmp(str1, str2, 5) == 0) {
        printf("The first 5 characters of str1 and str2 are equal.\n");
    } else {
        printf("The first 5 characters of str1 and str2 are not equal.\n");
    }

    // strncpy: copy a certain number of characters from one string to another
    strcpy(str3, "Hello, Again!");
    strncpy(str1, str3, 5);
    printf("str1 after copying the first 5 characters of str3: %s\n", str1);

    // strncat: concatenate a certain number of characters from one string to another
    strncat(str1, str3+5, 6);
    printf("str1 after concatenating the last 6