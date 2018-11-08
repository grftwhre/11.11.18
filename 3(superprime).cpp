#include <iostream> /*найти k-тое сверхпростое число, если обусловлено называть простое число сверхпростым, если его*/
#include <stdio.h>  /*номер в последовательности тоже простой*/
#include <math.h>
using namespace std;
int prime (int a)
{
 if (a!=2)
 {
     if (a<2||a%2==0)
     {
        return 0;
     }
   for(int i=3;(i*i)<=a;i+=2)
   {
       if((a%i)==0)
       {
        return 0;
       }
   }
 }
 return 1;
}
int superprime (int k)
{
int N=1471;
int x=0;
    int y=0;
       for (int i=1;i<N;i++)
         {
          if (prime(i))
            {
              x++;
                if (prime(x))
                  {
                   y++;
                     if (y==k)
                     {
                       return i;
                     }
                  }
             }
          }
}
int main()
{ int k;
  int N;
  printf("enter k\n");
  scanf("%d",&k);
printf("superprime -> %d",superprime(k));
return 0;
}
