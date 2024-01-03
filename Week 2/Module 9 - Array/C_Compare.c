// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
   int n ;
   scanf("%d" , &n);
   int ar[n];
   for (int i = 0; i <n ; i++)
{
    scanf("%d" , ar[i]);
}
int sum ,i;
 sum = 0;
 for (int i = 0; i <n ; i++)
 {
    sum = sum + ar[i];
 }
printf("%d" , ar[i]);




    return 0;
}