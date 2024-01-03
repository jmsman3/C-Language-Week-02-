// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int isPalindrome;
    char ar[1001];
    scanf("%s", ar);
    int len = strlen(ar);
    for (int i = 0; i < len / 2; i++)
        isPalindrome = 1;

    for (int i = 0; i < len / 2; i++)

    {
        if (ar[i] != ar[len - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}