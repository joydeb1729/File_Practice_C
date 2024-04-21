#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

const int mx_size = 1e3;

typedef struct my_my
{
    char word[1500];
    int cnt;
} my_my;

my_my my[1500];
int word_cnt = 0;

void add_or_increment(char *str)
{
    for (int i = 0; i < word_cnt; i++)
    {
        if (strcmp(my[i].word, str) == 0)
        {
            my[i].cnt++;
            return;
        }
    }

    strcpy(my[word_cnt].word, str);
    my[word_cnt].cnt = 1;
    word_cnt++;
    return;
}

int vowel_cnt(char *str)
{
    int cnt = 0, len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char temp = tolower(str[i]);
        if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{

    FILE *fp = fopen("practice.txt", "r");
    char buffer[mx_size];
    int cnt = 0;
    char dd[mx_size][mx_size];
    while (fscanf(fp, "%s", buffer) == 1)
    {
        add_or_increment(buffer);
        strcpy(dd[cnt++], buffer);

        // puts(buffer);
    }
    // for (int i = 0; i < cnt; i++)
    // {
    //     puts(dd[i]);
    // }
    // for (int i = 0; i < word_cnt; i++)
    // {
    //     printf("%s %d\n", my[i].word, my[i].cnt);
    // }

    // for (int i = 0; i < cnt; i++)
    // {
    //     printf("%s, vowel  %d\n", dd[i], vowel_cnt(dd[i]));
    // }
    FILE *vowel = fopen("vowel.txt", "w");
    FILE *freq = fopen("freq.txt", "w");

    for (int i = 0; i < cnt; i++)
    {
        fprintf(vowel, "%s, vowel %d\n", dd[i], vowel_cnt(dd[i]));
        // printf("%s, vowel  %d\n", dd[i], vowel_cnt(dd[i]));
    }
    for (int i = 0; i < word_cnt; i++)
    {
        // fprintf(freq, "%s %d\n", my[i].word, my[i].cnt);
        fprintf(freq, "%s ", my[i].word);
        while (my[i].cnt--)
        {
            fprintf(freq, "*");
        }
        fprintf(freq, "\n");

        // printf("%s %d\n", my[i].word, my[i].cnt);
    }

    fclose(vowel);
    fclose(freq);
    fclose(fp);
    printf("done");
    return 0;
}