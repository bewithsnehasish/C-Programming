// You are using GCC


#include <stdio.h>
#include <stdlib.h>


int my_strlen(char *str) {
    int len = 0;
    while (*str!= '\0') {
        len++;
        str++;
    }
    return len;
}

char *my_strcat(char *dest, char *src) {
    char *ptr = dest;
    while (*ptr!= '\0') {
        ptr++;
    }
    while (*src!= '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}

char *my_strcpy(char *dest, char *src) {
    char *ptr = dest;
    while (*src!= '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}


int my_strcmp(char *str1, char *str2) {
    while (*str1!= '\0' && *str2!= '\0') {
        if (*str1 < *str2) {
            return -1;
        } else if (*str1 > *str2) {
            return 1;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2!= '\0') {
        return -1;
    } else if (*str1!= '\0' && *str2 == '\0') {
        return 1;
    }
    return 0;
}



char *my_strlwr(char *str) {
    char *ptr = str;
    while (*ptr!= '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + ('a' - 'A');
        }
        ptr++;
    }
    return str;
}



char *my_strupr(char *str) {
    char *ptr = str;
    while (*ptr!= '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - ('a' - 'A');
        }
        ptr++;
    }
    return str;
}


char *my_strrev(char *str) {
    int len = my_strlen(str);
    char *ptr1 = str;
    char *ptr2 = str + len - 1;
    char temp;
    while (ptr1 < ptr2) {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    return str;
}



int my_stricmp(char *str1, char *str2) {
    while (*str1!= '\0' && *str2!= '\0') {
        char c1 = *str1;
        char c2 = *str2;
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + ('a' - 'A');
        }
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + ('a' - 'A');
        }
        if (c1 < c2) {
            return -1;
        } else if (c1 > c2) {
            return 1;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2!= '\0') {
        return -1;
    } else if (*str1!= '\0' && *str2 == '\0') {
        return 1;
    }
    return 0;
}







int main() {
    // Initialize strings
    char str1[100] = "Hello World!";
    char str2[100] = "This is a test.";
    char str3[100] = "UPPERCASE";
    char str4[100] = "lowercase";
    char str5[100] = "reversed";
    char dest[200];

    // Test strlen
    printf("Length of %s: %d\n", str1, my_strlen(str1));

    // Test strcat
    my_strcat(dest, str1);
    my_strcat(dest, " ");
    my_strcat(dest, str2);
    printf("Concatenated string: %s\n", dest);

    // Test strcpy
    my_strcpy(dest, str1);
    printf("Copied string: %s\n", dest);

    // Test strcmp
    if (my_strcmp(str1, str2) < 0) {
        printf("%s is less than %s\n", str1, str2);
    } else if (my_strcmp(str1, str2) > 0) {
        printf("%s is greater than %s\n", str1, str2);
    } else {
        printf("%s is equal to %s\n", str1, str2);
    }

    // Test strlwr
    my_strlwr(str3);
    printf("Lowercase string: %s\n", str3);

    // Test strupr
    my_strupr(str4);
    printf("Uppercase string: %s\n", str4);

    // Test strrev
    my_strrev(str5);
    printf("Reversed string: %s\n", str5);

    // Test stricmp
    if (my_stricmp(str3, str4) < 0) {
        printf("%s is less than %s\n", str3, str4);
    } else if (my_stricmp(str3, str4) > 0) {
        printf("%s is greater than %s\n", str3, str4);
    } else {
        printf("%s is equal to %s\n", str3, str4);
    }

    return 0;
}