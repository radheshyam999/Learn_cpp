#include <stdio.h>
int isPlandrome(char *s, int start, int end)
{
    int count = 0;
    int l = end;
    if (start == end)
    {
        return 1;
    }

    for (size_t i = start; i <= (end / 2); i++)
    {
        if (s[i] == s[l--])
        {

            count++;
        }
    }

    if (count >= end / 2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n = 0;
    char *str;
    scanf("%d", &n);
    scanf("%s", str);
    int start, end;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &start);
        scanf("%d", &end);
        if (isPlandrome(str, start, end))
        {
            printf("possible \n");
        }
        else
        {
            printf("Impossible \n");
        }
    }

    return 0;
}