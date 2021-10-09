#include <stdio.h>

int main()
{
    char in[1000];
    printf("Enter the number\n");
    scanf("%s", in);
    int i = 0;
    int ctr1 = 0, ctr2 = 0;
    while (in[i] != '\0')
    {
        if (in[i] == '.')
        {
            ctr1++;
            if (in[i + 1] != '\0')
                ctr2 = 1;
        }
        i++;
    }
    if (ctr1 == 1 && ctr2 == 1)
        printf("Valid\n");
    else
        printf("Invalid\n");
}