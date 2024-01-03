#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char s[10001];
        scanf("%s", s);

        int capitalCount = 0;
        int smallCount = 0;
        int digitCount = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capitalCount++;
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                smallCount++;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                digitCount++;
            }
        }

        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }

    return 0;
}
