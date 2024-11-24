#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char word[]) {
    int start = 0;
    int end = strlen(word) - 1;
    
    while (start < end) {
        if (tolower(word[start]) != tolower(word[end])) {
            return 0; 
        }
        start++;
        end--;
    }
    
    return 1; 
}

int main() {
    char words[5][21];  

   
    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", words[i]);  
    }

    for (int i = 0; i < 5; i++) {
        if (isPalindrome(words[i])) {
            printf("\"%s\" is a Palindrome.\n", words[i]);
        } else {
            printf("\"%s\" is Not a Palindrome.\n", words[i]);
        }
    }

    return 0;
}
