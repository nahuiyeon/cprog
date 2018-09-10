#include <stdio.h>
#include <stdlib.h>

int square(int k)
{
    return k*k;
}

int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",square(n));
   return 0;
}
