// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    char first[101];
    char second[101];
    scanf("%s %s", first, second);
    int len1 = strlen(first);
    int len2 = strlen(second);

    printf("%d %d\n", len1, len2);
    printf("%s%s\n", first, second);

    char temp = first[0];
    first[0] = second[0];
    second[0] = temp;

    printf("%s %s", first, second);

    return 0;
}