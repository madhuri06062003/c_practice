#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome = 1;

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (no spaces)

    length = strlen(str);

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if (isPalindrome)
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is not a palindrome.\n", str);

    return 0;
}
