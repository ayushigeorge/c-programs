/*
 * A
 * AB
 * ABC
 * ABCD
 * ABCDE
 */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet (A-Z): ");
    scanf(" %c", &ch);
    if (ch >= 65 && ch <= 90)
        for (int i=65; i<=ch; i++) {
            for (int j=65; j<=i; j++)
                printf("%c", j);
            printf("\n");
        }
    else
        printf("Invalid Input.\n");
    return(0);
}
