#include <stdio.h>
#include <string.h>

#define NUM_WORDS 5
#define MAX_WORD_LENGTH 100

void sortStrings(char *strings[], int n) {
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                // Swap pointers
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

int main() {
    char *words[NUM_WORDS] = {
        "banana",
        "apple",
        "grape",
        "orange",
        "kiwi"
    };

    printf("Original words:\n");
    for (int i = 0; i < NUM_WORDS; i++) {
        printf("%s\n", words[i]);
    }

    sortStrings(words, NUM_WORDS);

    printf("\nSorted words:\n");
    for (int i = 0; i < NUM_WORDS; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
