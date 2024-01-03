// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
 char a[1001];
 char b[1001];
 
 
 scanf("%s %s" , a,b);
 int st1 = strlen(a);
 int st2 = strlen(b);
 printf("%d %d\n" , st1 ,st2);
  printf("%s %s\n" , a ,b);
 
 

    return 0;
}