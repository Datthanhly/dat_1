#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[50] = "world!";
    char result[100];

    char *p1 = str1;
    char *p2 = str2;
    char *pResult = result;

    while (*p1 != '\0') {
        *pResult = *p1;
        p1++;
        pResult++;
    }

    while (*p2 != '\0') {
        *pResult = *p2;
        p2++;
        pResult++;
    }

    *pResult = '\0';

    printf("Chuoi sau khi noi: %s\n", result);

    return 0;
}
