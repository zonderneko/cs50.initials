#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100];
    gets (s);
    if (s[0] > 96 && s[0] < 123)
        printf("%c", s[0] - 32);
    else
        printf("%c", s[0]);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            if (s[i+1] > 96 && s[i+1] < 123)
                printf("%c", s[i+1] - 32);
            else
                printf("%c", s[i+1]);
        }
    }
    return 0;
}
