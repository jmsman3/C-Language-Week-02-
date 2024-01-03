#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    scanf("%s", s);
    int consonant = 0;
    int sz = strlen(s);
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < sz; i++) 
    {
        char notun = s[i];
        int isvowel = 0;
        for (int j = 0; j < 5; j++)
         {
            if (notun == vowels[j])
             {
                isvowel = 1;
                break;
            }
        }
        if (isvowel == 0 && (notun >= 'a' && notun <= 'z')) 
        {
            consonant++;
        }
    }
    printf("%d\n", consonant);
    return 0;
}
