#include <stdio.h>
int main()
{
    char *p, *q;
    char in[100];
    char stuff[100];
    char destuff[100];
    printf("Enter a string : ");
    gets(in);
    int count = 0;
    p = in;
    q = stuff;
    while (*p != '\0')
    {
        if (*p == '0')
        {
            *q = *p;
            p++;
            q++;
        }
        else
        {
            while (*p == '1' && count != 5)
            {
                *q = *p;
                count++;
                p++;
                q++;
            }
            if (count == 5)
            {
                *q = '0';
                q++;
            }
            count = 0;
        }
    }
    printf("\nStuffed string is %s ", stuff);

    p = stuff;
    q = destuff;
    while (*p != '\0')
    {
        if (*p == '0')
        {
            *q = *p;
            p++;
            q++;
        }
        else
        {
            while (*p == '1' && count != 5)
            {
                *q = *p;
                count++;
                p++;
                q++;
            }
            if (count == 5)
            {
                p++;
            }
            count = 0;
        }
    }
    printf("\nDestuffed string is %s ", destuff);
    return 0;
}