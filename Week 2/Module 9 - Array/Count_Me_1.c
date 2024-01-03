#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ekta_holo_divisible_by_2 = 0, ekta_holo_divisible_by_3 = 0;

    for (int i = 0; i < n; i++) {
        int sonkhagula;
        scanf("%d", &sonkhagula);

        if (sonkhagula % 2 == 0) {
            ekta_holo_divisible_by_2++;
        } else if (sonkhagula % 3 == 0) {
            ekta_holo_divisible_by_3++;
        }
    }

    printf("%d %d\n", ekta_holo_divisible_by_2, ekta_holo_divisible_by_3);
    return 0;
}
