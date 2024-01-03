// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //aita Acending er jonno
    for (int i= 0 ; i <n-1; i++)
    {
        for (int j = i +1; j<n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

//aita dcending er jono 
 for (int i= 0 ; i <n-1; i++)
    {
        for (int j = i +1; j<n; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }


  for(int i = 0 ; i<n ; i++)
  {
    printf("%d" , &a[i]);
  }
    return 0;
}