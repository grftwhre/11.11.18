#include <iostream>
#include <stdio.h>
using namespace std;
int countnull(unsigned int N)
{
   int s=0;
   if ((N>10)||(N==10))
    {
        while (N>9)
            {
             int o=N%10;
             if (o>5)
              {
             s++;
              }
             N=(int)(N/10);
             s+=(2*N);
             }
    }
  if ((N>5)&&(N<10))
   s++;
return s;
}
int main()
{   int N;
    printf("enter N\n");
    scanf("%d",&N);
    printf("number of 0 in N! = %d", countnull(N));
    return 0;
}
