#include <stdio.h>
#include <string.h>

int main() {

    char string[50];

    scanf("%s", string);

    switch(string[0]) {
        case 'a':
            case 'e':
                case 'i':
                    case 'o':
                        case 'u':
                            printf("Vowel\n");
                            break;
        default:
            printf("Consonant\n");
    }

    return 0;

}