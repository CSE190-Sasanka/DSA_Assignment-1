#include <stdio.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    int i = 0;
    int check = 0;
    int count = 0;
    int idx1 = -1, idx2 = -1;
    while (s[i] != '\0')
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            check = 1;
        else if ((s[i] == '.' || s[i] == '-' || s[i] == '_' || s[i] == '@') && (i != 0 && s[i + 1] != '\0'))
            check = 1;
        else
        {
            check = -1;
            break;
        }
        if (s[i] == '@')
        {
            count++;
            idx1 = i;
        }
        if (count > 1)
        {
            check = -1;
            break;
        }
        if (s[i] == '.')
        {
            idx2 = i;
        }
        i++;
    }
    if (idx2 - idx1 < 2)
        check = -1;
    if (check == 1)
        printf("Valid Email address\n");
    else
        printf("Invalid Email address\n");
}