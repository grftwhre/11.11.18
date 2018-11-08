#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int func(int a)
{
  int s=0;
  while (a)
   {
    int o=a%10;
    a=(int)(a/10);
     if (o%2!=0)
     s+=o;
   }
return s;
}
int main()
{
int n;
printf("enter n\n");
scanf("%d",&n);
printf("%d",func(n));
  return 0;
}
