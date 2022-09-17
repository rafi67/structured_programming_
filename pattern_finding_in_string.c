#include <stdio.h>
#include <string.h>

int pattern_counter(char *string, char *pattern, int pattern_size) {
    int pattern_index = 0, pattern_counter = 0, number_of_pattern = 0;
    while(*string!='\0') {
        if(*string==pattern[pattern_index]) {
            ++pattern_counter;
            ++pattern_index;
        }
        else {
            pattern_counter = 0;
            pattern_index = 0;
        }
        if(pattern_counter==pattern_size) {
            pattern_counter = 0;
            pattern_index = 0;
            ++number_of_pattern;
        }
        ++string;
    }
    return number_of_pattern;
}

int main() {

    char string[100];
    char pattern[100];

    scanf("%s %s", string, pattern);

    int pattern_size = strlen(pattern);

    int counted_pattern = pattern_counter(string, pattern, pattern_size);

    printf("%d pattern found in string\n", counted_pattern);

    return 0;

}