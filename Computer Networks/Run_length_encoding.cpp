#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    printf("Enter a string ");
    gets(str);
    int i = 0;
    int count;
    while (i < strlen(str))
    {
        int j = i + 1;
        while (str[i] == str[j])
        {
            j++;
        }
        int count = j - i;
        if (count == 1)
        {
            printf("%c", str[i]);
        }
        else
        {
            printf("%d%c", count, str[i]);
        }
        i = j;
    }

    return 0;
}