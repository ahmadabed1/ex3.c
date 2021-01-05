#include <stdio.h>
#include <string.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30
int getLine(char s[]) {

    scanf("please enter astring line: %s", s);
    int i = 0;
    for (i = 0; *(s + i) != '\n'; i++)
    {
    }
    return i;
}

int getword(char w[])
{
    char ch[WORD];
    scanf("enter a word %s ", ch);
    int i = 1;
    while (ch[i - 1] != '\n' || ch[i - 1] != '\t' || ch[i - 1] != ' ')
    {
        w[i] = ch[i];
        i++;
    }
    return i;
}

int substring(char* str1, char* str2)
{
    int i = 0, j = 0;
    int answer = 0;
    while (*(str1 + i) != '\0')
    {
        while (*(str1 + i) == *(str2 + j))
        {
            i++;
            j++;
            answer = 1;
            if (*(str2 + j) == '\0')
            {
                return 1;
            }
            if (*(str1 + i) == '\0')
            {
                return 0;
            }
        }
        if (answer == 0)
            i++;
    }
    return 0;
}

int similar(char* s, char* t, int n)
{
    int i = 0;
    int count = 0;
    int j = 0;
    while (*(t + j) != '\0' && *(s + i) != '\0')
    {
        if (*(s + i) == *(t + j))
        {
            count++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    int k = 0;
    while (*(s + k) != '\0')
    {
        k++;
    }
    if (count + n == k)
        return 1;
    else
    {
        return 0;
    }

}

void print_lines(char* str)
{
    int linenum;
    scanf("how many lines you want %d", &linenum);
    for (int i = 0; i < linenum; i++)
    {
        char l[LINE];
        getLine(l);
        if (substring(l, str) == 1)
            printf("%d", i + 1);
    }
}

void print_similar_words(char* str)
{
    int x, i;
    char word[WORD];
    scanf("how many words do you want %d", &x);
    for (i = 0; i < x; i++)
    {
        getword(word);
        if (similar(word, str, 1) == 1)
            printf("%s", word);
    }
}