#include <stdio.h>
#include <string.h>

#include <stdio.h>

//QUESTION 1

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int sum = 0;

    // With for loop
    printf("With for loop:\n");
    for (int i = 1, count = 0; count < n; i += 2, count++) {
        printf("%d\n", i);
        sum += i;
    }
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);

    // Reset the sum for the next loop
    sum = 0;

    // With while loop
    printf("With while loop:\n");
    int i = 1, count = 0;
    while (count < n) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            sum += i;
            count++;
        }
        i += 2;
    }
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);

    // Reset the sum for the next loop
    sum = 0;

    // With do-while
    printf("With do-while loop:\n");
    i = 1, count = 0;
    do {
        if (i % 2 != 0) {
            printf("%d\n", i);
            sum += i;
            count++;
        }
        i += 2;
    } while (count < n);
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}


//QUESTION 2

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        // Print leading spaces
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        }

        // Print asterisks
        for (int stars = 1; stars <= row; stars++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}


//QUESTION 3

#include <stdio.h>
#include <string.h>

void cmpstr(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        printf("The two strings are of different lengths.\n");
        return;
    }

    int differentCharacters = 0;

    for (int i = 0; i < len1; i++) {
        if (s1[i] != s2[i]) {
            printf("%c != %c\n", s1[i], s2[i]);
            differentCharacters++;
        }
    }

    if (differentCharacters == 0) {
        printf("The two strings are identical.\n");
    }
}

int main() {
    char str1[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    char str2[100];
    printf("Enter the second string: ");
    scanf("%s", str2);

    cmpstr(str1, str2);

    return 0;
}


//QUESTION 4

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swapCase(char *str) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            if (isupper(str[i])) {
                str[i] = tolower(str[i]);
            } else {
                str[i] = toupper(str[i]);
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    swapCase(str);

    printf("Modified sentence: %s\n", str);

    return 0;
}


//QUESTION 5

#include <stdio.h>
#include <string.h>

void array1(const char* string, char a[]) {
    int len1 = strlen(string);
    int count = 0;
    int isDuplicate; // A flag to check for duplicates

    for (int i = 0; i < len1; i++) {
        isDuplicate = 0; // Initialize the flag for each character
        for (int j = 0; j < count; j++) {
            if (string[i] == a[j]) {
                isDuplicate = 1;
                break; // Exit the inner loop if a duplicate is found
            }
        }

        if (!isDuplicate) {
            a[count] = string[i];
            count++;
        }
    }

    a[count] = '\0'; // Null-terminate the result string
    printf("%s\n", a);
}

int main() {
    char b[100];
    printf("Enter your elements: ");
    scanf("%s", b);
    char a[100];
    array1(b, a);
    return 0;
}





//QUESTION 6


struct distance {
    int feet1;
    int feet2;
    int inch1;
    int inch2;
    int feets;
    int inches;
};
int main() {
    struct distance DIST;
    printf("ENTER FEETS AND INCHES ");
    scanf("%d %d %d %d",&DIST.feet1,&DIST.feet2,&DIST.inch1,&DIST.inch2);
    DIST.feets=(DIST.feet1+DIST.feet2);
    DIST.inches=(DIST.inch1+DIST.inch2);
    printf("Total: %d feet, %d inches\n", DIST.feets, DIST.inches);
    return 0;
}
