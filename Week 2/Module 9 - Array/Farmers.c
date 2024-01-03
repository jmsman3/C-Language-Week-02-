#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int SururSomoy = M1 * D;
        int PoreAroFarmerAddHoi = M1 + M2;
        int NotunSomoyHolo = SururSomoy / PoreAroFarmerAddHoi;
        int dayParthokko = D - NotunSomoyHolo;
        printf("%d\n", dayParthokko);
    }

    return 0;
}
