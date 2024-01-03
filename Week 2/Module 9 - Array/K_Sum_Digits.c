// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char ar[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &ar[i]);
        sum += ar[i] - '0';
    }

    printf("%d", sum);

    return 0;
}