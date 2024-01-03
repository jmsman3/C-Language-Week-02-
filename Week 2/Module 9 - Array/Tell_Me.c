#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);
        int ar[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &ar[i]);
        }

        int X;
        scanf("%d", &X);

        int PaiyaGesi = 0;
        for (int i = 0; i < N; i++)
        {
            if (ar[i] == X)
            {
                PaiyaGesi = 1;
                break;
            }
        }
        if (PaiyaGesi)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
