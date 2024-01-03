// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int n;
 scanf ("%d" , &n);
 int ar[n+1];
 for(int i = 0; i<n; i++)
{
    scanf("%d" , &ar[i]);
}


int posi , value ;
scanf ("%d %d" , &posi, &value);
for (int i = n; i < posi +1; i--)
{
 ar[i] = ar[i-1];
}




ar[posi]= value;
for (int i = 0 ; i<n; i++)
{
 printf("%d " , ar[i]);
}


    return 0;
}
