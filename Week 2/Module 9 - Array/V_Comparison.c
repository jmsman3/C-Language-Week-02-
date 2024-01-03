// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char s;
    int b;

    scanf("%d %c %d", &a, &s, &b);
    if (s == '<')
    {
        if (a < b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    if (s == '>')
    {
        if (a > b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    if (s == '=')
    {
        if (a == b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}