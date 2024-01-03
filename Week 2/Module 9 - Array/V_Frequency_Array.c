// Online C compiler to run C program online
#include <stdio.h>

int main()
{
  int N, M;
  scanf("%d %d", &N, &M);
  int count [M+1];
  for(int i = 1; i < M ; i++)
   {
    count[i] = 0;
   }
   for (int i = 0; i<N ; i++)
   { 
    
    count[i]++;
   }


    return 0;
}