#include <stdio.h>
#include <string.h>
#include "txtfind.h"
#include "txtfind.c"

int main() {
    char ch = 'u';
    while (ch != 'a' && ch != 'b')
    {
        scanf("enter a or b char %c ", &ch);
    }
    char word[WORD];
    getword(word);
    if (ch == 'a') {
        printf("the lines is : \n");
        print_lines(word);
    }
    else {
        printf("the simillar words is: \n");
        print_similar_words(word);
    }
    return 0;
}