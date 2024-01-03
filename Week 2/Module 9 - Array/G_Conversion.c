// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    char S1[100001];
    scanf("%s", S1);
    char S2[100001];

    for (int i = 0; S1[i] != '\0'; i++)
    {
        if (S1[i] == ',')
        {
            S2[i] = ' ';
        }

        else if (S1[i] >= 'a' && S1[i] <= 'z')
        {
            S2[i] = S1[i] - 32;
        }

        else if (S1[i] >= 'A' && S1[i] <= 'Z')
        {
            S2[i] = S1[i] + 32;
        }

        
    }


    printf("%s", S2);

    return 0;
}
